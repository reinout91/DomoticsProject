/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Heating
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Heating.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Heating.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_Heating_setSetting_SERIALIZE \
    aomsmethod->addAttribute("setting", x2String(setting));\
    aomsmethod->addAttribute("value", x2String(value));
#define DevicePkg_Heating_Heating_SERIALIZE OM_NO_OP

#define DevicePkg_Heating_getSetting_SERIALIZE aomsmethod->addAttribute("setting", x2String(setting));

#define DevicePkg_Heating_getThisDeviceStatus_SERIALIZE OM_NO_OP

#define OMAnim_DevicePkg_Heating_setTemperature_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_temperature)

#define OMAnim_DevicePkg_Heating_setTemperature_int_SERIALIZE_RET_VAL
//#]

//## package DevicePkg

//## class Heating
Heating::Heating(IOxfActive* theActiveContext) : nSettings(1), temperature(18) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Heating, Heating(), 0, DevicePkg_Heating_Heating_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

Heating::~Heating() {
    NOTIFY_DESTRUCTOR(~Heating, false);
}

int Heating::getSetting(int setting) {
    NOTIFY_OPERATION(getSetting, getSetting(int), 1, DevicePkg_Heating_getSetting_SERIALIZE);
    //#[ operation getSetting(int)
    if ((setting >= 0) && (setting < nSettings)){
    	return temperature;
    }
    //#]
}

int Heating::getThisDeviceStatus() {
    NOTIFY_OPERATION(getThisDeviceStatus, getThisDeviceStatus(), 0, DevicePkg_Heating_getThisDeviceStatus_SERIALIZE);
    //#[ operation getThisDeviceStatus()
    return state;
    //#]
}

void Heating::setSetting(int setting, int value) {
    NOTIFY_OPERATION(setSetting, setSetting(int,int), 2, DevicePkg_Heating_setSetting_SERIALIZE);
    //#[ operation setSetting(int,int)
    if ((setting >= 0) && (setting <= nSettings) && (state == 1)){
    	if ((value >= 15) && (value <= 25)){
    		temperature = value;
    	}
    	else if (value < 15){
    		temperature = 15;
    	}
    	else{
    		temperature = 18;
    	} 
    } // end if       
    //#]
}

const int Heating::getNSettings() const {
    return nSettings;
}

int Heating::getTemperature() const {
    return temperature;
}

void Heating::setTemperature(int p_temperature) {
    temperature = p_temperature;
    NOTIFY_SET_OPERATION;
}

bool Heating::startBehavior() {
    bool done = false;
    done = DeviceWithSettings::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHeating::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    aomsAttributes->addAttribute("nSettings", x2String(myReal->nSettings));
    OMAnimatedDeviceWithSettings::serializeAttributes(aomsAttributes);
}

void OMAnimatedHeating::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDeviceWithSettings::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(Heating, DevicePkg, false, DeviceWithSettings, OMAnimatedDeviceWithSettings, OMAnimatedHeating)

OMINIT_SUPERCLASS(DeviceWithSettings, OMAnimatedDeviceWithSettings)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedHeating, DevicePkg_Heating_setTemperature_int, "setTemperature", FALSE, "setTemperature(int)", 1)

IMPLEMENT_OP_CALL(DevicePkg_Heating_setTemperature_int, Heating, setTemperature(p_temperature), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Heating.cpp
*********************************************************************/
