/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Controller
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omcollec.h>
//## link itsIUserInterface
class iUserInterface;

//## auto_generated
#include "ControllerPkg.h"
//## class Controller
#include "iController.h"
//## class pUIIn_C
#include "iUserInterface.h"
//## link itsLight
class Light;

//## link itsTelevision
class Television;

//## link itsDevice
class Device;

//## link itsSensor
class Sensor;

//## auto_generated
class UserInterface;

//## auto_generated
class Controller;

//## package ControllerPkg

//## class Controller
class Controller : public iController {
public :

//#[ ignore
    //## package ControllerPkg
    class pUIOut_C : public iController {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pUIOut_C();
        
        //## auto_generated
        virtual ~pUIOut_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectController(Controller* part);
        
        //## auto_generated
        virtual int getDeviceSetting(int device, int setting);
        
        //## auto_generated
        iController* getItsIController();
        
        //## auto_generated
        virtual void setDeviceSetting(int device, int setting, int value);
        
        //## auto_generated
        virtual void switchDevice(int device);
        
        //## auto_generated
        virtual void turnDeviceOff(int device);
        
        //## auto_generated
        virtual void turnDeviceOn(int device);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIController(iController* p_iController);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iController* itsIController;		//## link itsIController
    };
    
    //## package ControllerPkg
    class pUIIn_C : public iUserInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pUIIn_C();
        
        //## auto_generated
        virtual ~pUIIn_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void getDesiredDevice();
        
        //## auto_generated
        virtual void getDesiredSetting();
        
        //## auto_generated
        iUserInterface* getItsIUserInterface();
        
        //## auto_generated
        iUserInterface* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIUserInterface(iUserInterface* p_iUserInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iUserInterface* itsIUserInterface;		//## link itsIUserInterface
    };
//#]

#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~Controller();
    
    ////    Additional operations    ////
    
    ////    Attributes    ////
    
    ////    Relations and components    ////

protected :

    //## auto_generated
    void cleanUpRelations();

public :

    //## operation showState()
    void showState();
    
    //## auto_generated
    Controller();
    
    //## operation getDeviceSetting(int,int)
    int getDeviceSetting(int device, int setting);
    
    //## operation setDeviceSetting(int,int,int)
    void setDeviceSetting(int device, int setting, int value);
    
    //## operation switchDevice(int)
    void switchDevice(int device);
    
    //## operation turnDeviceOff(int)
    void turnDeviceOff(int device);
    
    //## operation turnDeviceOn(int)
    void turnDeviceOn(int device);
    
    //## auto_generated
    OMIterator<Device*> getItsDevice() const;
    
    //## auto_generated
    void addItsDevice(Device* p_Device);
    
    //## auto_generated
    void removeItsDevice(Device* p_Device);
    
    //## auto_generated
    void clearItsDevice();
    
    //## auto_generated
    OMIterator<Sensor*> getItsSensor() const;
    
    //## auto_generated
    void addItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void removeItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void clearItsSensor();

protected :

    //## auto_generated
    void initRelations();
    
    OMCollection<Device*> itsDevice;		//## link itsDevice
    
    OMCollection<Sensor*> itsSensor;		//## link itsSensor

public :

    //## auto_generated
    void _addItsDevice(Device* p_Device);
    
    //## auto_generated
    void _removeItsDevice(Device* p_Device);
    
    //## auto_generated
    void _clearItsDevice();
    
    //## auto_generated
    void _addItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void _removeItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void _clearItsSensor();
    
    //## auto_generated
    pUIOut_C* getPUIOut() const;
    
    //## auto_generated
    pUIOut_C* get_pUIOut() const;
    
    //## auto_generated
    pUIIn_C* getPUIIn() const;
    
    //## auto_generated
    pUIIn_C* get_pUIIn() const;
    
    //## auto_generated
    Television* getItsTelevision() const;
    
    //## auto_generated
    void setItsTelevision(Television* p_Television);

protected :

    Television* itsTelevision;		//## link itsTelevision

public :

    //## auto_generated
    void __setItsTelevision(Television* p_Television);
    
    //## auto_generated
    void _setItsTelevision(Television* p_Television);
    
    //## auto_generated
    void _clearItsTelevision();
    
    //## auto_generated
    iUserInterface* getItsIUserInterface() const;
    
    //## auto_generated
    void setItsIUserInterface(iUserInterface* p_iUserInterface);
    
    //## auto_generated
    Light* getItsLight() const;
    
    //## auto_generated
    void setItsLight(Light* p_Light);

protected :

    iUserInterface* itsIUserInterface;		//## link itsIUserInterface
    
    Light* itsLight;		//## link itsLight

public :

    //## auto_generated
    void __setItsIUserInterface(iUserInterface* p_iUserInterface);
    
    //## auto_generated
    void _setItsIUserInterface(iUserInterface* p_iUserInterface);
    
    //## auto_generated
    void _clearItsIUserInterface();
    
    //## auto_generated
    void __setItsLight(Light* p_Light);
    
    //## auto_generated
    void _setItsLight(Light* p_Light);
    
    //## auto_generated
    void _clearItsLight();

protected :

//#[ ignore
    pUIOut_C pUIOut;
    
    pUIIn_C pUIIn;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : public OMAnimatediController {
    DECLARE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Controller.h
*********************************************************************/
