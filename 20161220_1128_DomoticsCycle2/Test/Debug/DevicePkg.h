/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: DevicePkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\DevicePkg.h
*********************************************************************/

#ifndef DevicePkg_H
#define DevicePkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class AlarmRadio;

//## auto_generated
class Clock;

//## auto_generated
class CoffeeMachine;

//## auto_generated
class Device;

//## auto_generated
class DeviceWithSettings;

//## auto_generated
class DeviceWithTimedAction;

//## auto_generated
class Heating;

//## auto_generated
class Light;

//## auto_generated
class Radio;

//## auto_generated
class RtvDevice;

//## auto_generated
class Television;

//#[ ignore
#define evStartProgram_DevicePkg_id 22401

#define evStart_DevicePkg_id 22402

#define evTurnOnDevice_DevicePkg_id 22403

#define evTurnOffDevice_DevicePkg_id 22404

#define evReinitialize_DevicePkg_id 22405

#define evChannelSwitch_DevicePkg_id 22406

#define evResetAlarm_DevicePkg_id 22407

#define evSetAlarm_DevicePkg_id 22408
//#]

//## package DevicePkg



//## event evStartProgram()
class evStartProgram : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartProgram;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartProgram();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartProgram : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartProgram)
};
//#]
#endif // _OMINSTRUMENT

//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evTurnOnDevice()
class evTurnOnDevice : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTurnOnDevice;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTurnOnDevice();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTurnOnDevice : virtual public AOMEvent {
    DECLARE_META_EVENT(evTurnOnDevice)
};
//#]
#endif // _OMINSTRUMENT

//## event evTurnOffDevice()
class evTurnOffDevice : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTurnOffDevice;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTurnOffDevice();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTurnOffDevice : virtual public AOMEvent {
    DECLARE_META_EVENT(evTurnOffDevice)
};
//#]
#endif // _OMINSTRUMENT

//## event evReinitialize()
class evReinitialize : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReinitialize;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReinitialize();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReinitialize : virtual public AOMEvent {
    DECLARE_META_EVENT(evReinitialize)
};
//#]
#endif // _OMINSTRUMENT

//## event evChannelSwitch()
class evChannelSwitch : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevChannelSwitch;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evChannelSwitch();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevChannelSwitch : virtual public AOMEvent {
    DECLARE_META_EVENT(evChannelSwitch)
};
//#]
#endif // _OMINSTRUMENT

//## event evResetAlarm()
class evResetAlarm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevResetAlarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evResetAlarm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevResetAlarm : virtual public AOMEvent {
    DECLARE_META_EVENT(evResetAlarm)
};
//#]
#endif // _OMINSTRUMENT

//## event evSetAlarm()
class evSetAlarm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetAlarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetAlarm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetAlarm : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetAlarm)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\DevicePkg.h
*********************************************************************/
