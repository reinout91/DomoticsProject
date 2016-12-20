/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: LivingRoom
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\LivingRoom.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "LivingRoom.h"
//## auto_generated
#include "Device.h"
//## auto_generated
#include "Sensor.h"
//#[ ignore
#define SpacePkg_LivingRoom_LivingRoom_SERIALIZE OM_NO_OP

#define SpacePkg_LivingRoom_getTimeOutDuration_SERIALIZE OM_NO_OP

#define SpacePkg_LivingRoom_newMovementAction_SERIALIZE OM_NO_OP

#define SpacePkg_LivingRoom_timeOutAction_SERIALIZE OM_NO_OP
//#]

//## package SpacePkg

//## class LivingRoom
LivingRoom::LivingRoom(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(LivingRoom, LivingRoom(), 0, SpacePkg_LivingRoom_LivingRoom_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

LivingRoom::~LivingRoom() {
    NOTIFY_DESTRUCTOR(~LivingRoom, false);
}

int LivingRoom::getTimeOutDuration() {
    NOTIFY_OPERATION(getTimeOutDuration, getTimeOutDuration(), 0, SpacePkg_LivingRoom_getTimeOutDuration_SERIALIZE);
    //#[ operation getTimeOutDuration()
    return 30;
    //#]
}

void LivingRoom::newMovementAction() {
    NOTIFY_OPERATION(newMovementAction, newMovementAction(), 0, SpacePkg_LivingRoom_newMovementAction_SERIALIZE);
    //#[ operation newMovementAction()
    //#]
}

void LivingRoom::timeOutAction() {
    NOTIFY_OPERATION(timeOutAction, timeOutAction(), 0, SpacePkg_LivingRoom_timeOutAction_SERIALIZE);
    //#[ operation timeOutAction()
    //#]
}

bool LivingRoom::startBehavior() {
    bool done = false;
    done = Room::startBehavior();
    return done;
}

void LivingRoom::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void LivingRoom::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.timedOut");
        rootState_subState = timedOut;
        rootState_active = timedOut;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus LivingRoom::rootState_processEvent() {
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

IOxfReactive::TakeEventStatus LivingRoom::countingDown_handleEvent() {
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
void OMAnimatedLivingRoom::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRoom::serializeAttributes(aomsAttributes);
}

void OMAnimatedLivingRoom::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedRoom::serializeRelations(aomsRelations);
}

void OMAnimatedLivingRoom::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case LivingRoom::countingDown:
        {
            countingDown_serializeStates(aomsState);
        }
        break;
        case LivingRoom::timedOut:
        {
            timedOut_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLivingRoom::timedOut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.timedOut");
}

void OMAnimatedLivingRoom::countingDown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.countingDown");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(LivingRoom, SpacePkg, false, Room, OMAnimatedRoom, OMAnimatedLivingRoom)

OMINIT_SUPERCLASS(Room, OMAnimatedRoom)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\LivingRoom.cpp
*********************************************************************/
