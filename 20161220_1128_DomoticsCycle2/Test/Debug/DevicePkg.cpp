/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: DevicePkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\DevicePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DevicePkg.h"
//## auto_generated
#include "AlarmRadio.h"
//## auto_generated
#include "Clock.h"
//## auto_generated
#include "CoffeeMachine.h"
//## auto_generated
#include "Device.h"
//## auto_generated
#include "DeviceWithSettings.h"
//## auto_generated
#include "DeviceWithTimedAction.h"
//## auto_generated
#include "Heating.h"
//## auto_generated
#include "Light.h"
//## auto_generated
#include "Radio.h"
//## auto_generated
#include "RtvDevice.h"
//## auto_generated
#include "Television.h"
//#[ ignore
#define evStartProgram_SERIALIZE OM_NO_OP

#define evStartProgram_UNSERIALIZE OM_NO_OP

#define evStartProgram_CONSTRUCTOR evStartProgram()

#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()

#define evTurnOnDevice_SERIALIZE OM_NO_OP

#define evTurnOnDevice_UNSERIALIZE OM_NO_OP

#define evTurnOnDevice_CONSTRUCTOR evTurnOnDevice()

#define evTurnOffDevice_SERIALIZE OM_NO_OP

#define evTurnOffDevice_UNSERIALIZE OM_NO_OP

#define evTurnOffDevice_CONSTRUCTOR evTurnOffDevice()

#define evReinitialize_SERIALIZE OM_NO_OP

#define evReinitialize_UNSERIALIZE OM_NO_OP

#define evReinitialize_CONSTRUCTOR evReinitialize()

#define evChannelSwitch_SERIALIZE OM_NO_OP

#define evChannelSwitch_UNSERIALIZE OM_NO_OP

#define evChannelSwitch_CONSTRUCTOR evChannelSwitch()

#define evResetAlarm_SERIALIZE OM_NO_OP

#define evResetAlarm_UNSERIALIZE OM_NO_OP

#define evResetAlarm_CONSTRUCTOR evResetAlarm()

#define evSetAlarm_SERIALIZE OM_NO_OP

#define evSetAlarm_UNSERIALIZE OM_NO_OP

#define evSetAlarm_CONSTRUCTOR evSetAlarm()
//#]

//## package DevicePkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(DevicePkg, DevicePkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evStartProgram()
evStartProgram::evStartProgram() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartProgram)
    setId(evStartProgram_DevicePkg_id);
}

bool evStartProgram::isTypeOf(const short id) const {
    return (evStartProgram_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evStartProgram, DevicePkg, DevicePkg, evStartProgram())

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_DevicePkg_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, DevicePkg, DevicePkg, evStart())

//## event evTurnOnDevice()
evTurnOnDevice::evTurnOnDevice() {
    NOTIFY_EVENT_CONSTRUCTOR(evTurnOnDevice)
    setId(evTurnOnDevice_DevicePkg_id);
}

bool evTurnOnDevice::isTypeOf(const short id) const {
    return (evTurnOnDevice_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evTurnOnDevice, DevicePkg, DevicePkg, evTurnOnDevice())

//## event evTurnOffDevice()
evTurnOffDevice::evTurnOffDevice() {
    NOTIFY_EVENT_CONSTRUCTOR(evTurnOffDevice)
    setId(evTurnOffDevice_DevicePkg_id);
}

bool evTurnOffDevice::isTypeOf(const short id) const {
    return (evTurnOffDevice_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evTurnOffDevice, DevicePkg, DevicePkg, evTurnOffDevice())

//## event evReinitialize()
evReinitialize::evReinitialize() {
    NOTIFY_EVENT_CONSTRUCTOR(evReinitialize)
    setId(evReinitialize_DevicePkg_id);
}

bool evReinitialize::isTypeOf(const short id) const {
    return (evReinitialize_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evReinitialize, DevicePkg, DevicePkg, evReinitialize())

//## event evChannelSwitch()
evChannelSwitch::evChannelSwitch() {
    NOTIFY_EVENT_CONSTRUCTOR(evChannelSwitch)
    setId(evChannelSwitch_DevicePkg_id);
}

bool evChannelSwitch::isTypeOf(const short id) const {
    return (evChannelSwitch_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evChannelSwitch, DevicePkg, DevicePkg, evChannelSwitch())

//## event evResetAlarm()
evResetAlarm::evResetAlarm() {
    NOTIFY_EVENT_CONSTRUCTOR(evResetAlarm)
    setId(evResetAlarm_DevicePkg_id);
}

bool evResetAlarm::isTypeOf(const short id) const {
    return (evResetAlarm_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evResetAlarm, DevicePkg, DevicePkg, evResetAlarm())

//## event evSetAlarm()
evSetAlarm::evSetAlarm() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetAlarm)
    setId(evSetAlarm_DevicePkg_id);
}

bool evSetAlarm::isTypeOf(const short id) const {
    return (evSetAlarm_DevicePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetAlarm, DevicePkg, DevicePkg, evSetAlarm())

/*********************************************************************
	File Path	: Test\Debug\DevicePkg.cpp
*********************************************************************/
