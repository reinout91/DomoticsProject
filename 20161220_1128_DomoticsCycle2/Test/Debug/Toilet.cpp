/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Toilet
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Toilet.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Toilet.h"
//## auto_generated
#include "Device.h"
//## link itsMovementSensor
#include "MovementSensor.h"
//## auto_generated
#include "Sensor.h"
//#[ ignore
#define SpacePkg_Toilet_Toilet_SERIALIZE OM_NO_OP

#define SpacePkg_Toilet_getTimeOutDuration_SERIALIZE OM_NO_OP

#define SpacePkg_Toilet_newMovementAction_SERIALIZE OM_NO_OP

#define SpacePkg_Toilet_timeOutAction_SERIALIZE OM_NO_OP
//#]

//## package SpacePkg

//## class Toilet
Toilet::Toilet(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Toilet, Toilet(), 0, SpacePkg_Toilet_Toilet_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsMovementSensor = NULL;
    initStatechart();
}

Toilet::~Toilet() {
    NOTIFY_DESTRUCTOR(~Toilet, false);
    cleanUpRelations();
}

int Toilet::getTimeOutDuration() {
    NOTIFY_OPERATION(getTimeOutDuration, getTimeOutDuration(), 0, SpacePkg_Toilet_getTimeOutDuration_SERIALIZE);
    //#[ operation getTimeOutDuration()
    return 3;
    //#]
}

void Toilet::newMovementAction() {
    NOTIFY_OPERATION(newMovementAction, newMovementAction(), 0, SpacePkg_Toilet_newMovementAction_SERIALIZE);
    //#[ operation newMovementAction()
    resetCountDown();
    itsDevice[ 0 ] -> turnThisDeviceOn();
    //#]
}

void Toilet::timeOutAction() {
    NOTIFY_OPERATION(timeOutAction, timeOutAction(), 0, SpacePkg_Toilet_timeOutAction_SERIALIZE);
    //#[ operation timeOutAction()
    itsDevice[ 0 ] -> turnThisDeviceOff();
    //#]
}

MovementSensor* Toilet::getItsMovementSensor() const {
    return itsMovementSensor;
}

void Toilet::setItsMovementSensor(MovementSensor* p_MovementSensor) {
    if(p_MovementSensor != NULL)
        {
            p_MovementSensor->_setItsToilet(this);
        }
    _setItsMovementSensor(p_MovementSensor);
}

bool Toilet::startBehavior() {
    bool done = false;
    done = Room::startBehavior();
    return done;
}

void Toilet::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Toilet::cleanUpRelations() {
    if(itsMovementSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMovementSensor");
            Toilet* p_Toilet = itsMovementSensor->getItsToilet();
            if(p_Toilet != NULL)
                {
                    itsMovementSensor->__setItsToilet(NULL);
                }
            itsMovementSensor = NULL;
        }
}

void Toilet::__setItsMovementSensor(MovementSensor* p_MovementSensor) {
    itsMovementSensor = p_MovementSensor;
    if(p_MovementSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMovementSensor", p_MovementSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMovementSensor");
        }
}

void Toilet::_setItsMovementSensor(MovementSensor* p_MovementSensor) {
    if(itsMovementSensor != NULL)
        {
            itsMovementSensor->__setItsToilet(NULL);
        }
    __setItsMovementSensor(p_MovementSensor);
}

void Toilet::_clearItsMovementSensor() {
    NOTIFY_RELATION_CLEARED("itsMovementSensor");
    itsMovementSensor = NULL;
}

void Toilet::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.timedOut");
        rootState_subState = timedOut;
        rootState_active = timedOut;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Toilet::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State countingDown
        case countingDown:
        {
            res = countingDown_handleEvent();
        }
        break;
        // State timedOut
        case timedOut:
        {
            if(IS_EVENT_TYPE_OF(evRoomMovement_SpacePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.timedOut");
                    //#[ transition 4 
                    newMovementAction();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.countingDown");
                    pushNullTransition();
                    rootState_subState = countingDown;
                    rootState_active = countingDown;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.countingDown");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Toilet::countingDown_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.countingDown");
                    //#[ transition 2 
                    --secondsSinceMovement;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.countingDown");
                    pushNullTransition();
                    rootState_subState = countingDown;
                    rootState_active = countingDown;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.countingDown");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 3 
            if(isTimedOut())
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.countingDown");
                    //#[ transition 3 
                    timeOutAction();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.timedOut");
                    rootState_subState = timedOut;
                    rootState_active = timedOut;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evRoomMovement_SpacePkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            popNullTransition();
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.countingDown");
            //#[ transition 1 
            resetCountDown();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.countingDown");
            pushNullTransition();
            rootState_subState = countingDown;
            rootState_active = countingDown;
            rootState_timeout = scheduleTimeout(1000, "ROOT.countingDown");
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedToilet::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRoom::serializeAttributes(aomsAttributes);
}

void OMAnimatedToilet::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMovementSensor", false, true);
    if(myReal->itsMovementSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsMovementSensor);
        }
    OMAnimatedRoom::serializeRelations(aomsRelations);
}

void OMAnimatedToilet::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Toilet::countingDown:
        {
            countingDown_serializeStates(aomsState);
        }
        break;
        case Toilet::timedOut:
        {
            timedOut_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedToilet::timedOut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.timedOut");
}

void OMAnimatedToilet::countingDown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.countingDown");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Toilet, SpacePkg, false, Room, OMAnimatedRoom, OMAnimatedToilet)

OMINIT_SUPERCLASS(Room, OMAnimatedRoom)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Toilet.cpp
*********************************************************************/
