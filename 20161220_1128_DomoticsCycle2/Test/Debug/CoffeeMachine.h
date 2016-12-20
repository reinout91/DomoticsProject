/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: CoffeeMachine
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\CoffeeMachine.h
*********************************************************************/

#ifndef CoffeeMachine_H
#define CoffeeMachine_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class CoffeeMachine
#include "DeviceWithTimedAction.h"
//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class CoffeeMachine
class CoffeeMachine : public DeviceWithTimedAction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCoffeeMachine;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation CoffeeMachine()
    CoffeeMachine(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~CoffeeMachine();
    
    ////    Operations    ////
    
    //## operation getThisDeviceStatus()
    int getThisDeviceStatus();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    //## statechart_method
    void on_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus on_handleEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus busy_handleEvent();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCoffeeMachine : public OMAnimatedDeviceWithTimedAction {
    DECLARE_REACTIVE_META(CoffeeMachine, OMAnimatedCoffeeMachine)
    
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

#endif
/*********************************************************************
	File Path	: Test\Debug\CoffeeMachine.h
*********************************************************************/
