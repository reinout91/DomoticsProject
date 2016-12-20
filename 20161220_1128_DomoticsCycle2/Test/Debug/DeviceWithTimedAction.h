/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: DeviceWithTimedAction
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\DeviceWithTimedAction.h
*********************************************************************/

#ifndef DeviceWithTimedAction_H
#define DeviceWithTimedAction_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class DeviceWithTimedAction
#include "Device.h"
//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class DeviceWithTimedAction
class DeviceWithTimedAction : public Device {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDeviceWithTimedAction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DeviceWithTimedAction(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~DeviceWithTimedAction();
    
    ////    Operations    ////
    
    //## operation isDone()
    bool isDone();
    
    //## operation resetTime()
    void resetTime();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getRemainingTime() const;
    
    //## auto_generated
    void setRemainingTime(int p_remainingTime);
    
    //## auto_generated
    int getTimeNeeded() const;
    
    //## auto_generated
    void setTimeNeeded(int p_timeNeeded);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int remainingTime;		//## attribute remainingTime
    
    int timeNeeded;		//## attribute timeNeeded
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // on:
    //## statechart_method
    inline bool on_IN() const;
    
    //## statechart_method
    void on_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus on_handleEvent();
    
    // waiting:
    //## statechart_method
    inline bool waiting_IN() const;
    
    // done:
    //## statechart_method
    inline bool done_IN() const;
    
    // busy:
    //## statechart_method
    inline bool busy_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus busy_handleEvent();
    
    // off:
    //## statechart_method
    inline bool off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum DeviceWithTimedAction_Enum {
        OMNonState = 0,
        on = 1,
        waiting = 2,
        done = 3,
        busy = 4,
        off = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int on_subState;
    
    IOxfTimeout* on_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDeviceWithTimedAction : public OMAnimatedDevice {
    DECLARE_REACTIVE_META(DeviceWithTimedAction, OMAnimatedDeviceWithTimedAction)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void done_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void busy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool DeviceWithTimedAction::rootState_IN() const {
    return true;
}

inline bool DeviceWithTimedAction::on_IN() const {
    return rootState_subState == on;
}

inline bool DeviceWithTimedAction::waiting_IN() const {
    return on_subState == waiting;
}

inline bool DeviceWithTimedAction::done_IN() const {
    return on_subState == done;
}

inline bool DeviceWithTimedAction::busy_IN() const {
    return on_subState == busy;
}

inline bool DeviceWithTimedAction::off_IN() const {
    return rootState_subState == off;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\DeviceWithTimedAction.h
*********************************************************************/
