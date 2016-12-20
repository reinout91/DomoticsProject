/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Heating
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Heating.h
*********************************************************************/

#ifndef Heating_H
#define Heating_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class Heating
#include "DeviceWithSettings.h"
//#[ ignore
#define OMAnim_DevicePkg_Heating_setTemperature_int_ARGS_DECLARATION int p_temperature;
//#]

//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class Heating
class Heating : public DeviceWithSettings {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHeating;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Heating(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Heating();
    
    ////    Operations    ////
    
    //## operation getSetting(int)
    int getSetting(int setting);
    
    //## operation getThisDeviceStatus()
    int getThisDeviceStatus();
    
    //## operation setSetting(int,int)
    void setSetting(int setting, int value);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getNSettings() const;
    
    //## auto_generated
    int getTemperature() const;
    
    //## auto_generated
    void setTemperature(int p_temperature);
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Attributes    ////

protected :

    const int nSettings;		//## attribute nSettings
    
    int temperature;		//## attribute temperature
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(DevicePkg_Heating_setTemperature_int)

//#[ ignore
class OMAnimatedHeating : public OMAnimatedDeviceWithSettings {
    DECLARE_META(Heating, OMAnimatedHeating)
    
    DECLARE_META_OP(DevicePkg_Heating_setTemperature_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Heating.h
*********************************************************************/
