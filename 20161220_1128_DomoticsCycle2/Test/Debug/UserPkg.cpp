/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: UserPkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\UserPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserPkg.h"
//## auto_generated
#include "iUserInterface.h"
//## auto_generated
#include "UserInterface.h"
//## auto_generated
#include "Admin.h"
//## auto_generated
#include "Login.h"
//## auto_generated
#include "Member.h"
//## auto_generated
#include "User.h"
//## auto_generated
#include "UserList.h"
//#[ ignore
#define evResetUI_SERIALIZE OM_NO_OP

#define evResetUI_UNSERIALIZE OM_NO_OP

#define evResetUI_CONSTRUCTOR evResetUI()

#define evUserRequestSwitchDevice_SERIALIZE OM_NO_OP

#define evUserRequestSwitchDevice_UNSERIALIZE OM_NO_OP

#define evUserRequestSwitchDevice_CONSTRUCTOR evUserRequestSwitchDevice()

#define evUserRequestTurnDeviceOff_SERIALIZE OM_NO_OP

#define evUserRequestTurnDeviceOff_UNSERIALIZE OM_NO_OP

#define evUserRequestTurnDeviceOff_CONSTRUCTOR evUserRequestTurnDeviceOff()

#define evUserRequestSetDeviceSetting_SERIALIZE OM_NO_OP

#define evUserRequestSetDeviceSetting_UNSERIALIZE OM_NO_OP

#define evUserRequestSetDeviceSetting_CONSTRUCTOR evUserRequestSetDeviceSetting()

#define evUserRequestTurnDeviceOn_SERIALIZE OM_NO_OP

#define evUserRequestTurnDeviceOn_UNSERIALIZE OM_NO_OP

#define evUserRequestTurnDeviceOn_CONSTRUCTOR evUserRequestTurnDeviceOn()
//#]

//## package UserPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UserPkg, UserPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evResetUI()
evResetUI::evResetUI() {
    NOTIFY_EVENT_CONSTRUCTOR(evResetUI)
    setId(evResetUI_UserPkg_id);
}

bool evResetUI::isTypeOf(const short id) const {
    return (evResetUI_UserPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evResetUI, UserPkg, UserPkg, evResetUI())

//## event evUserRequestSwitchDevice()
evUserRequestSwitchDevice::evUserRequestSwitchDevice() {
    NOTIFY_EVENT_CONSTRUCTOR(evUserRequestSwitchDevice)
    setId(evUserRequestSwitchDevice_UserPkg_id);
}

bool evUserRequestSwitchDevice::isTypeOf(const short id) const {
    return (evUserRequestSwitchDevice_UserPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evUserRequestSwitchDevice, UserPkg, UserPkg, evUserRequestSwitchDevice())

//## event evUserRequestTurnDeviceOff()
evUserRequestTurnDeviceOff::evUserRequestTurnDeviceOff() {
    NOTIFY_EVENT_CONSTRUCTOR(evUserRequestTurnDeviceOff)
    setId(evUserRequestTurnDeviceOff_UserPkg_id);
}

bool evUserRequestTurnDeviceOff::isTypeOf(const short id) const {
    return (evUserRequestTurnDeviceOff_UserPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evUserRequestTurnDeviceOff, UserPkg, UserPkg, evUserRequestTurnDeviceOff())

//## event evUserRequestSetDeviceSetting()
evUserRequestSetDeviceSetting::evUserRequestSetDeviceSetting() {
    NOTIFY_EVENT_CONSTRUCTOR(evUserRequestSetDeviceSetting)
    setId(evUserRequestSetDeviceSetting_UserPkg_id);
}

bool evUserRequestSetDeviceSetting::isTypeOf(const short id) const {
    return (evUserRequestSetDeviceSetting_UserPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evUserRequestSetDeviceSetting, UserPkg, UserPkg, evUserRequestSetDeviceSetting())

//## event evUserRequestTurnDeviceOn()
evUserRequestTurnDeviceOn::evUserRequestTurnDeviceOn() {
    NOTIFY_EVENT_CONSTRUCTOR(evUserRequestTurnDeviceOn)
    setId(evUserRequestTurnDeviceOn_UserPkg_id);
}

bool evUserRequestTurnDeviceOn::isTypeOf(const short id) const {
    return (evUserRequestTurnDeviceOn_UserPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evUserRequestTurnDeviceOn, UserPkg, UserPkg, evUserRequestTurnDeviceOn())

/*********************************************************************
	File Path	: Test\Debug\UserPkg.cpp
*********************************************************************/
