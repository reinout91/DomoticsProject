/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Kitchen
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Kitchen.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Kitchen.h"
//## auto_generated
#include "Device.h"
//## auto_generated
#include "Sensor.h"
//#[ ignore
#define SpacePkg_Kitchen_Kitchen_SERIALIZE OM_NO_OP

#define SpacePkg_Kitchen_getTimeOutDuration_SERIALIZE OM_NO_OP

#define SpacePkg_Kitchen_newMovementAction_SERIALIZE OM_NO_OP

#define SpacePkg_Kitchen_timeOutAction_SERIALIZE OM_NO_OP
//#]

//## package SpacePkg

//## class Kitchen
Kitchen::Kitchen(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Kitchen, Kitchen(), 0, SpacePkg_Kitchen_Kitchen_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Kitchen::~Kitchen() {
    NOTIFY_DESTRUCTOR(~Kitchen, false);
}

int Kitchen::getTimeOutDuration() {
    NOTIFY_OPERATION(getTimeOutDuration, getTimeOutDuration(), 0, SpacePkg_Kitchen_getTimeOutDuration_SERIALIZE);
    //#[ operation getTimeOutDuration()
    return 10;
    //#]
}

void Kitchen::newMovementAction() {
    NOTIFY_OPERATION(newMovementAction, newMovementAction(), 0, SpacePkg_Kitchen_newMovementAction_SERIALIZE);
    //#[ operation newMovementAction()
    //#]
}

void Kitchen::timeOutAction() {
    NOTIFY_OPERATION(timeOutAction, timeOutAction(), 0, SpacePkg_Kitchen_timeOutAction_SERIALIZE);
    //#[ operation timeOutAction()
    //#]
}

bool Kitchen::startBehavior() {
    bool done = false;
    done = Room::startBehavior();
    return done;
}

void Kitchen::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Kitchen::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.timedOut");
        rootState_subState = timedOut;
        rootState_active = timedOut;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Kitchen::rootState_processEvent() {
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

IOxfReactive::TakeEventStatus Kitchen::countingDown_handleEvent() {
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
void OMAnimatedKitchen::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRoom::serializeAttributes(aomsAttributes);
}

void OMAnimatedKitchen::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedRoom::serializeRelations(aomsRelations);
}

void OMAnimatedKitchen::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Kitchen::countingDown:
        {
            countingDown_serializeStates(aomsState);
        }
        break;
        case Kitchen::timedOut:
        {
            timedOut_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedKitchen::timedOut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.timedOut");
}

void OMAnimatedKitchen::countingDown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.countingDown");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Kitchen, SpacePkg, false, Room, OMAnimatedRoom, OMAnimatedKitchen)

OMINIT_SUPERCLASS(Room, OMAnimatedRoom)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Kitchen.cpp
*********************************************************************/
