/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Device
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Device.h
*********************************************************************/

#ifndef Device_H
#define Device_H

//## auto_generated
#include "DevicePkg.h"
//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
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

//## package DevicePkg

//## class Device
class Device : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDevice;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Device(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Device();
    
    ////    Operations    ////
    
    //## operation getThisDeviceStatus()
    virtual int getThisDeviceStatus() = 0;
    
    //## operation switchThisDevice()
    void switchThisDevice();
    
    //## operation turnThisDeviceOff()
    void turnThisDeviceOff();
    
    //## operation turnThisDeviceOn()
    void turnThisDeviceOn();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getState() const;
    
    //## auto_generated
    void setState(int p_state);
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    Room* getItsRoom() const;
    
    //## auto_generated
    void setItsRoom(Room* p_Room);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int state;		//## attribute state
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    Room* itsRoom;		//## link itsRoom
    
    ////    Framework operations    ////

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
    
    //## auto_generated
    virtual bool startBehavior();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDevice : virtual public AOMInstance {
    DECLARE_META(Device, OMAnimatedDevice)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Device.h
*********************************************************************/
