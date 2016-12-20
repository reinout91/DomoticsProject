/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: iController
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\iController.h
*********************************************************************/

#ifndef iController_H
#define iController_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ControllerPkg.h"
//## link itsController
class Controller;

//## link itsUserInterface
class UserInterface;

//## package ControllerPkg

//## class iController
class iController {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iController();
    
    //## auto_generated
    virtual ~iController() = 0;
    
    ////    Operations    ////
    
    //## operation getDeviceSetting(int,int)
    virtual int getDeviceSetting(int device, int setting) = 0;
    
    //## operation setDeviceSetting(int,int,int)
    virtual void setDeviceSetting(int device, int setting, int value) = 0;
    
    //## operation switchDevice(int)
    virtual void switchDevice(int device) = 0;
    
    //## operation turnDeviceOff(int)
    virtual void turnDeviceOff(int device) = 0;
    
    //## operation turnDeviceOn(int)
    virtual void turnDeviceOn(int device) = 0;
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    UserInterface* getItsUserInterface() const;
    
    //## auto_generated
    void setItsUserInterface(UserInterface* p_UserInterface);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    UserInterface* itsUserInterface;		//## link itsUserInterface
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUserInterface(UserInterface* p_UserInterface);
    
    //## auto_generated
    void _setItsUserInterface(UserInterface* p_UserInterface);
    
    //## auto_generated
    void _clearItsUserInterface();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediController : virtual public AOMInstance {
    DECLARE_META(iController, OMAnimatediController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\iController.h
*********************************************************************/
