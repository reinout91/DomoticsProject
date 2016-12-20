/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Toilet
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Toilet.h
*********************************************************************/

#ifndef Toilet_H
#define Toilet_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SpacePkg.h"
//## class Toilet
#include "Room.h"
//## auto_generated
class Device;

//## link itsMovementSensor
class MovementSensor;

//## auto_generated
class Sensor;

//## package SpacePkg

//## class Toilet
class Toilet : public Room {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedToilet;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Toilet(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Toilet();
    
    ////    Operations    ////
    
    //## operation getTimeOutDuration()
    int getTimeOutDuration();
    
    //## operation newMovementAction()
    void newMovementAction();
    
    //## operation timeOutAction()
    void timeOutAction();
    
    ////    Additional operations    ////
    
    //## auto_generated
    MovementSensor* getItsMovementSensor() const;
    
    //## auto_generated
    void setItsMovementSensor(MovementSensor* p_MovementSensor);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    MovementSensor* itsMovementSensor;		//## link itsMovementSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMovementSensor(MovementSensor* p_MovementSensor);
    
    //## auto_generated
    void _setItsMovementSensor(MovementSensor* p_MovementSensor);
    
    //## auto_generated
    void _clearItsMovementSensor();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus countingDown_handleEvent();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedToilet : public OMAnimatedRoom {
    DECLARE_REACTIVE_META(Toilet, OMAnimatedToilet)
    
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
	File Path	: Test\Debug\Toilet.h
*********************************************************************/
