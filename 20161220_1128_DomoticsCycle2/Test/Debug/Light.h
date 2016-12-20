/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Light
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Light.h
*********************************************************************/

#ifndef Light_H
#define Light_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class Light
#include "Device.h"
//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class Light
class Light : public Device {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLight;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Light(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Light();
    
    ////    Operations    ////
    
    //## operation getThisDeviceStatus()
    int getThisDeviceStatus();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
    //## auto_generated
    Controller* getItsController_1() const;
    
    //## auto_generated
    void setItsController_1(Controller* p_Controller);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Controller* itsController_1;		//## link itsController_1

public :

    //## auto_generated
    void __setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController_1();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLight : public OMAnimatedDevice {
    DECLARE_META(Light, OMAnimatedLight)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Light.h
*********************************************************************/
