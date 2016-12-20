/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: MovementSensor
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\MovementSensor.h
*********************************************************************/

#ifndef MovementSensor_H
#define MovementSensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SensorPkg.h"
//## class MovementSensor
#include "Sensor.h"
//## link itsToilet
class Toilet;

//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package SensorPkg

//## class MovementSensor
class MovementSensor : public Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMovementSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MovementSensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~MovementSensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    //## auto_generated
    Toilet* getItsToilet() const;
    
    //## auto_generated
    void setItsToilet(Toilet* p_Toilet);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Toilet* itsToilet;		//## link itsToilet

public :

    //## auto_generated
    void __setItsToilet(Toilet* p_Toilet);
    
    //## auto_generated
    void _setItsToilet(Toilet* p_Toilet);
    
    //## auto_generated
    void _clearItsToilet();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;

protected :

//#[ ignore
    enum MovementSensor_Enum {
        OMNonState = 0,
        idle = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMovementSensor : public OMAnimatedSensor {
    DECLARE_REACTIVE_META(MovementSensor, OMAnimatedMovementSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool MovementSensor::rootState_IN() const {
    return true;
}

inline bool MovementSensor::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\MovementSensor.h
*********************************************************************/
