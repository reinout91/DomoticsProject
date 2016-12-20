/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Sensor
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SensorPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsController
class Controller;

//## link itsRoom
class Room;

//## package SensorPkg

//## class Sensor
class Sensor : public OMReactive {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Sensor();
    
    ////    Additional operations    ////
    
    ////    Attributes    ////
    
    ////    Relations and components    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    Room* getItsRoom() const;
    
    //## auto_generated
    void setItsRoom(Room* p_Room);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Controller* itsController;		//## link itsController
    
    Room* itsRoom;		//## link itsRoom

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    //## auto_generated
    void __setItsRoom(Room* p_Room);
    
    //## auto_generated
    void _setItsRoom(Room* p_Room);
    
    //## auto_generated
    void _clearItsRoom();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensor : virtual public AOMInstance {
    DECLARE_META(Sensor, OMAnimatedSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Sensor.h
*********************************************************************/
