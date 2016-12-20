/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: SensorPkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\SensorPkg.h
*********************************************************************/

#ifndef SensorPkg_H
#define SensorPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class MovementSensor;

//## auto_generated
class Sensor;

//#[ ignore
#define evSensorMovement_SensorPkg_id 1

#define evResetSensor_SensorPkg_id 2
//#]

//## package SensorPkg



//## event evSensorMovement()
class evSensorMovement : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSensorMovement;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSensorMovement();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSensorMovement : virtual public AOMEvent {
    DECLARE_META_EVENT(evSensorMovement)
};
//#]
#endif // _OMINSTRUMENT

//## event evResetSensor()
class evResetSensor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevResetSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evResetSensor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevResetSensor : virtual public AOMEvent {
    DECLARE_META_EVENT(evResetSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\SensorPkg.h
*********************************************************************/
