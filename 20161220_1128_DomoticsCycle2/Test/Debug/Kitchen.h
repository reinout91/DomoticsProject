/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Kitchen
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Kitchen.h
*********************************************************************/

#ifndef Kitchen_H
#define Kitchen_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SpacePkg.h"
//## class Kitchen
#include "Room.h"
//## auto_generated
class Device;

//## auto_generated
class Sensor;

//## package SpacePkg

//## class Kitchen
class Kitchen : public Room {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedKitchen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Kitchen(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Kitchen();
    
    ////    Operations    ////
    
    //## operation getTimeOutDuration()
    int getTimeOutDuration();
    
    //## operation newMovementAction()
    void newMovementAction();
    
    //## operation timeOutAction()
    void timeOutAction();
    
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
    IOxfReactive::TakeEventStatus countingDown_handleEvent();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKitchen : public OMAnimatedRoom {
    DECLARE_REACTIVE_META(Kitchen, OMAnimatedKitchen)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void timedOut_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void countingDown_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Kitchen.h
*********************************************************************/
