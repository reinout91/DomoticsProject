/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: DeviceWithTimedAction
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\DeviceWithTimedAction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DeviceWithTimedAction.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_DeviceWithTimedAction_DeviceWithTimedAction_SERIALIZE OM_NO_OP

#define DevicePkg_DeviceWithTimedAction_isDone_SERIALIZE OM_NO_OP

#define DevicePkg_DeviceWithTimedAction_resetTime_SERIALIZE OM_NO_OP
//#]

//## package DevicePkg

//## class DeviceWithTimedAction
DeviceWithTimedAction::DeviceWithTimedAction(IOxfActive* theActiveContext) : remainingTime(0), timeNeeded(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DeviceWithTimedAction, DeviceWithTimedAction(), 0, DevicePkg_DeviceWithTimedAction_DeviceWithTimedAction_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

DeviceWithTimedAction::~DeviceWithTimedAction() {
    NOTIFY_DESTRUCTOR(~DeviceWithTimedAction, false);
    cancelTimeouts();
}

bool DeviceWithTimedAction::isDone() {
    NOTIFY_OPERATION(isDone, isDone(), 0, DevicePkg_DeviceWithTimedAction_isDone_SERIALIZE);
    //#[ operation isDone()
    return (0 == remainingTime);
    //#]
}

void DeviceWithTimedAction::resetTime() {
    NOTIFY_OPERATION(resetTime, resetTime(), 0, DevicePkg_DeviceWithTimedAction_resetTime_SERIALIZE);
    //#[ operation resetTime()
    remainingTime = timeNeeded;
    //#]
}

int DeviceWithTimedAction::getRemainingTime() const {
    return remainingTime;
}

void DeviceWithTimedAction::setRemainingTime(int p_remainingTime) {
    remainingTime = p_remainingTime;
    NOTIFY_SET_OPERATION;
}

int DeviceWithTimedAction::getTimeNeeded() const {
    return timeNeeded;
}

void DeviceWithTimedAction::setTimeNeeded(int p_timeNeeded) {
    timeNeeded = p_timeNeeded;
}

bool DeviceWithTimedAction::startBehavior() {
    bool done = false;
    done = Device::startBehavior();
    return done;
}

void DeviceWithTimedAction::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    on_subState = OMNonState;
    on_timeout = NULL;
}

void DeviceWithTimedAction::cancelTimeouts() {
    cancel(on_timeout);
}

bool DeviceWithTimedAction::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(on_timeout == arg)
        {
            on_timeout = NULL;
            res = true;
        }
    return res;
}

void DeviceWithTimedAction::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.off");
        rootState_subState = off;
        rootState_active = off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DeviceWithTimedAction::rootState_processEvent() {
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

void DeviceWithTimedAction::on_entDef() {
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

IOxfReactive::TakeEventStatus DeviceWithTimedAction::on_handleEvent() {
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

IOxfReactive::TakeEventStatus DeviceWithTimedAction::busy_handleEvent() {
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
void OMAnimatedDeviceWithTimedAction::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("remainingTime", x2String(myReal->remainingTime));
    aomsAttributes->addAttribute("timeNeeded", x2String(myReal->timeNeeded));
    OMAnimatedDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedDeviceWithTimedAction::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDevice::serializeRelations(aomsRelations);
}

void OMAnimatedDeviceWithTimedAction::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DeviceWithTimedAction::off:
        {
            off_serializeStates(aomsState);
        }
        break;
        case DeviceWithTimedAction::on:
        {
            on_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDeviceWithTimedAction::on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on");
    switch (myReal->on_subState) {
        case DeviceWithTimedAction::waiting:
        {
            waiting_serializeStates(aomsState);
        }
        break;
        case DeviceWithTimedAction::busy:
        {
            busy_serializeStates(aomsState);
        }
        break;
        case DeviceWithTimedAction::done:
        {
            done_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDeviceWithTimedAction::waiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.waiting");
}

void OMAnimatedDeviceWithTimedAction::done_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.done");
}

void OMAnimatedDeviceWithTimedAction::busy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.busy");
}

void OMAnimatedDeviceWithTimedAction::off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.off");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(DeviceWithTimedAction, DevicePkg, false, Device, OMAnimatedDevice, OMAnimatedDeviceWithTimedAction)

OMINIT_SUPERCLASS(Device, OMAnimatedDevice)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\DeviceWithTimedAction.cpp
*********************************************************************/
