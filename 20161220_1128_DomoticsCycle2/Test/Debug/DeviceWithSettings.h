/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: DeviceWithSettings
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\DeviceWithSettings.h
*********************************************************************/

#ifndef DeviceWithSettings_H
#define DeviceWithSettings_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class DeviceWithSettings
#include "Device.h"
//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class DeviceWithSettings
class DeviceWithSettings : public Device {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDeviceWithSettings;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DeviceWithSettings(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~DeviceWithSettings() = 0;
    
    ////    Operations    ////
    
    //## operation getSetting(int)
    virtual int getSetting(int setting) = 0;
    
    //## operation setSetting(int,int)
    virtual void setSetting(int setting, int value) = 0;
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getNSettings() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Attributes    ////

protected :

    const int nSettings;		//## attribute nSettings
    
    ////    Framework operations    ////
    
    ////    Framework    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDeviceWithSettings : public OMAnimatedDevice {
    DECLARE_META(DeviceWithSettings, OMAnimatedDeviceWithSettings)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\DeviceWithSettings.h
*********************************************************************/
