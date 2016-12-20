/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: DeviceWithSettings
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\DeviceWithSettings.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DeviceWithSettings.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_DeviceWithSettings_setSetting_SERIALIZE \
    aomsmethod->addAttribute("setting", x2String(setting));\
    aomsmethod->addAttribute("value", x2String(value));
#define DevicePkg_DeviceWithSettings_DeviceWithSettings_SERIALIZE OM_NO_OP

#define DevicePkg_DeviceWithSettings_getSetting_SERIALIZE aomsmethod->addAttribute("setting", x2String(setting));
//#]

//## package DevicePkg

//## class DeviceWithSettings
DeviceWithSettings::DeviceWithSettings(IOxfActive* theActiveContext) : nSettings(2) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DeviceWithSettings, DeviceWithSettings(), 0, DevicePkg_DeviceWithSettings_DeviceWithSettings_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

DeviceWithSettings::~DeviceWithSettings() {
    NOTIFY_DESTRUCTOR(~DeviceWithSettings, false);
}

const int DeviceWithSettings::getNSettings() const {
    return nSettings;
}

bool DeviceWithSettings::startBehavior() {
    bool done = false;
    done = Device::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDeviceWithSettings::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("nSettings", x2String(myReal->nSettings));
    OMAnimatedDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedDeviceWithSettings::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDevice::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(DeviceWithSettings, DevicePkg, false, Device, OMAnimatedDevice, OMAnimatedDeviceWithSettings)

OMINIT_SUPERCLASS(Device, OMAnimatedDevice)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\DeviceWithSettings.cpp
*********************************************************************/
