/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: CoffeeMachine
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\CoffeeMachine.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CoffeeMachine.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_CoffeeMachine_CoffeeMachine_SERIALIZE OM_NO_OP

#define DevicePkg_CoffeeMachine_getThisDeviceStatus_SERIALIZE OM_NO_OP
//#]

//## package DevicePkg

//## class CoffeeMachine
CoffeeMachine::CoffeeMachine(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(CoffeeMachine, CoffeeMachine(), 0, DevicePkg_CoffeeMachine_CoffeeMachine_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation CoffeeMachine()
    timeNeeded = 5;
    //#]
}

CoffeeMachine::~CoffeeMachine() {
    NOTIFY_DESTRUCTOR(~CoffeeMachine, false);
}

int CoffeeMachine::getThisDeviceStatus() {
    NOTIFY_OPERATION(getThisDeviceStatus, getThisDeviceStatus(), 0, DevicePkg_CoffeeMachine_getThisDeviceStatus_SERIALIZE);
    //#[ operation getThisDeviceStatus()
    return Device::state;
    //#]
}

bool CoffeeMachine::startBehavior() {
    bool done = false;
    done = DeviceWithTimedAction::startBehavior();
    return done;
}

void CoffeeMachine::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    on_subState = OMNonState;
}

void CoffeeMachine::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.off");
        rootState_subState = off;
        rootState_active = off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus CoffeeMachine::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State off
        case off:
        {
            if(IS_EVENT_TYPE_OF(evTurnOnDevice_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.off");
                    NOTIFY_STATE_ENTERED("ROOT.on");
                    rootState_subState = on;
                    NOTIFY_STATE_ENTERED("ROOT.on.waiting");
                    on_subState = waiting;
                    rootState_active = waiting;
                    //#[ state on.waiting.(Entry) 
                    resetTime();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State waiting
        case waiting:
        {
            if(IS_EVENT_TYPE_OF(evStart_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.on.waiting");
                    NOTIFY_STATE_ENTERED("ROOT.on.busy");
                    pushNullTransition();
                    on_subState = busy;
                    rootState_active = busy;
                    on_timeout = scheduleTimeout(1000, "ROOT.on.busy");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = on_handleEvent();
                }
        }
        break;
        // State busy
        case busy:
        {
            res = busy_handleEvent();
        }
        break;
        // State done
        case done:
        {
            if(IS_EVENT_TYPE_OF(evReinitialize_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.on.done");
                    NOTIFY_STATE_ENTERED("ROOT.on.waiting");
                    on_subState = waiting;
                    rootState_active = waiting;
                    //#[ state on.waiting.(Entry) 
                    resetTime();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = on_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

void CoffeeMachine::on_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.on");
    rootState_subState = on;
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_ENTERED("ROOT.on.waiting");
    on_subState = waiting;
    rootState_active = waiting;
    //#[ state on.waiting.(Entry) 
    resetTime();
    //#]
    NOTIFY_TRANSITION_TERMINATED("1");
}

IOxfReactive::TakeEventStatus CoffeeMachine::on_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evTurnOffDevice_DevicePkg_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            switch (on_subState) {
                // State waiting
                case waiting:
                {
                    NOTIFY_STATE_EXITED("ROOT.on.waiting");
                }
                break;
                // State busy
                case busy:
                {
                    popNullTransition();
                    cancel(on_timeout);
                    NOTIFY_STATE_EXITED("ROOT.on.busy");
                }
                break;
                // State done
                case done:
                {
                    NOTIFY_STATE_EXITED("ROOT.on.done");
                }
                break;
                default:
                    break;
            }
            on_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.on");
            NOTIFY_STATE_ENTERED("ROOT.off");
            rootState_subState = off;
            rootState_active = off;
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus CoffeeMachine::busy_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == on_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    cancel(on_timeout);
                    NOTIFY_STATE_EXITED("ROOT.on.busy");
                    //#[ transition 5 
                    --remainingTime;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on.busy");
                    pushNullTransition();
                    on_subState = busy;
                    rootState_active = busy;
                    on_timeout = scheduleTimeout(1000, "ROOT.on.busy");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 6 
            if(isDone())
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    cancel(on_timeout);
                    NOTIFY_STATE_EXITED("ROOT.on.busy");
                    NOTIFY_STATE_ENTERED("ROOT.on.done");
                    on_subState = done;
                    rootState_active = done;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = on_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCoffeeMachine::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDeviceWithTimedAction::serializeAttributes(aomsAttributes);
}

void OMAnimatedCoffeeMachine::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDeviceWithTimedAction::serializeRelations(aomsRelations);
}

void OMAnimatedCoffeeMachine::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CoffeeMachine::off:
        {
            off_serializeStates(aomsState);
        }
        break;
        case CoffeeMachine::on:
        {
            on_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCoffeeMachine::on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on");
    switch (myReal->on_subState) {
        case CoffeeMachine::waiting:
        {
            waiting_serializeStates(aomsState);
        }
        break;
        case CoffeeMachine::busy:
        {
            busy_serializeStates(aomsState);
        }
        break;
        case CoffeeMachine::done:
        {
            done_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCoffeeMachine::waiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.waiting");
}

void OMAnimatedCoffeeMachine::done_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.done");
}

void OMAnimatedCoffeeMachine::busy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.busy");
}

void OMAnimatedCoffeeMachine::off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.off");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(CoffeeMachine, DevicePkg, false, DeviceWithTimedAction, OMAnimatedDeviceWithTimedAction, OMAnimatedCoffeeMachine)

OMINIT_SUPERCLASS(DeviceWithTimedAction, OMAnimatedDeviceWithTimedAction)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\CoffeeMachine.cpp
*********************************************************************/
