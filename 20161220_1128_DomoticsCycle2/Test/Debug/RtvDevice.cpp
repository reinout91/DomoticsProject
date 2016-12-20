/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: RtvDevice
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\RtvDevice.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RtvDevice.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_RtvDevice_setChannelOrder_SERIALIZE \
    aomsmethod->addAttribute("setToThisChannel", x2String(setToThisChannel));\
    aomsmethod->addAttribute("tvStation", x2String(tvStation));
#define DevicePkg_RtvDevice_setSetting_SERIALIZE \
    aomsmethod->addAttribute("setting", x2String(setting));\
    aomsmethod->addAttribute("value", x2String(value));
#define DevicePkg_RtvDevice_switchChannels_SERIALIZE \
    aomsmethod->addAttribute("channel1", x2String(channel1));\
    aomsmethod->addAttribute("channel2", x2String(channel2));
#define DevicePkg_RtvDevice_RtvDevice_SERIALIZE OM_NO_OP

#define DevicePkg_RtvDevice_getSetting_SERIALIZE aomsmethod->addAttribute("setting", x2String(setting));

#define DevicePkg_RtvDevice_getThisDeviceStatus_SERIALIZE OM_NO_OP

#define DevicePkg_RtvDevice_setChannelName_SERIALIZE aomsmethod->addAttribute("channelNumber", x2String(channelNumber));

#define OMAnim_DevicePkg_RtvDevice_setSwitchChannelOne_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_switchChannelOne)

#define OMAnim_DevicePkg_RtvDevice_setSwitchChannelOne_int_SERIALIZE_RET_VAL

#define OMAnim_DevicePkg_RtvDevice_setSwitchChannelTwo_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_switchChannelTwo)

#define OMAnim_DevicePkg_RtvDevice_setSwitchChannelTwo_int_SERIALIZE_RET_VAL
//#]

//## package DevicePkg

//## class RtvDevice
RtvDevice::~RtvDevice() {
    NOTIFY_DESTRUCTOR(~RtvDevice, false);
}

int RtvDevice::getSetting(int setting) {
    NOTIFY_OPERATION(getSetting, getSetting(int), 1, DevicePkg_RtvDevice_getSetting_SERIALIZE);
    //#[ operation getSetting(int)
    if ((setting >= 0) && (setting < nSettings)){
    	return settings[setting];
    }
    //#]
}

int RtvDevice::getThisDeviceStatus() {
    NOTIFY_OPERATION(getThisDeviceStatus, getThisDeviceStatus(), 0, DevicePkg_RtvDevice_getThisDeviceStatus_SERIALIZE);
    //#[ operation getThisDeviceStatus()
    return state;
    //#]
}

void RtvDevice::setSetting(int setting, int value) {
    NOTIFY_OPERATION(setSetting, setSetting(int,int), 2, DevicePkg_RtvDevice_setSetting_SERIALIZE);
    //#[ operation setSetting(int,int)
    if ((setting >= 0) && (setting <= nSettings) && (state == 1)){
    	switch (setting){
    		case 0:
    			if ((value >= 0) && (value <= 10)){
    				settings[setting] = value;
    			}
    			else if (value < 0){
    				settings[setting] = 0;
    			}
    			else{
    				settings[setting] = 10;
    			} // end if .. else if .. else ..
    			volume = settings[setting];
    			break;
    		case 1:
    			if ((value > 0) && (value <= nChannels)){
    				settings[setting] = value;
    			}
    			else if (value <= 0){
    				settings[setting] = 1;
    			}
    			else{
    				settings[setting] = nChannels;
    			} // end if .. else if .. else ..
    			channel = settings[setting];
    			setChannelName(channel);
    			break;
    	} // end switch
    } // end if       
    //#]
}

int RtvDevice::getChannel() const {
    return channel;
}

void RtvDevice::setChannel(int p_channel) {
    channel = p_channel;
    NOTIFY_SET_OPERATION;
}

const int RtvDevice::getNSettings() const {
    return nSettings;
}

int RtvDevice::getSettings(int i1) const {
    return settings[i1];
}

void RtvDevice::setSettings(int i1, int p_settings) {
    settings[i1] = p_settings;
}

int RtvDevice::getVolume() const {
    return volume;
}

void RtvDevice::setVolume(int p_volume) {
    volume = p_volume;
    NOTIFY_SET_OPERATION;
}

void RtvDevice::setChannelOrder(int setToThisChannel, int tvStation) {
    NOTIFY_OPERATION(setChannelOrder, setChannelOrder(int,int), 2, DevicePkg_RtvDevice_setChannelOrder_SERIALIZE);
    //#[ operation setChannelOrder(int,int)
    if ((setToThisChannel>0) && (setToThisChannel<=nChannels) && (tvStation>0) && (tvStation<=nChannels)) {
    	channelOrder[setToThisChannel]=tvStation;
    }
    //#]
}

char* RtvDevice::getChannelName() const {
    return channelName;
}

void RtvDevice::setChannelName(char* p_channelName) {
    channelName = p_channelName;
    NOTIFY_SET_OPERATION;
}

int RtvDevice::getNChannels() const {
    return nChannels;
}

void RtvDevice::setNChannels(int p_nChannels) {
    nChannels = p_nChannels;
}

RtvDevice::RtvDevice(IOxfActive* theActiveContext) : channel(1), nSettings(2), volume(5), nChannels(10), channelName(""), switchChannelOne(1), switchChannelTwo(1) {
    NOTIFY_REACTIVE_CONSTRUCTOR(RtvDevice, RtvDevice(), 0, DevicePkg_RtvDevice_RtvDevice_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

void RtvDevice::setChannelName(int channelNumber) {
    NOTIFY_OPERATION(setChannelName, setChannelName(int), 1, DevicePkg_RtvDevice_setChannelName_SERIALIZE);
    //#[ operation setChannelName(int)
    int temp = getChannelOrder(channelNumber);
    
    switch(temp){
    	case 1: 
    		channelName = "NPO 1"; 
    		break;
    	case 2: 
    		channelName = "NPO 2";
    		break;
    	case 3:
    		channelName = "NPO 3";
    		break;
    	case 4:
    		channelName = "RTL 4";
    		break;
    	case 5:
    		channelName = "RTL 5";
    		break;
    	case 6:
    		channelName = "SBS6";
    		break;
    	case 7:
    		channelName = "RTL 7";
    		break;
    	case 8: 
    		channelName = "Veronica";
    		break;
    	case 9:
    		channelName = "Net5";
    		break;
    	case 10:
    		channelName = "RTL 8";
    		break;
    	default:
    		channelName = "";
    }
    //#]
    NOTIFY_SET_OPERATION;
}

void RtvDevice::switchChannels(int channel1, int channel2) {
    NOTIFY_OPERATION(switchChannels, switchChannels(int,int), 2, DevicePkg_RtvDevice_switchChannels_SERIALIZE);
    //#[ operation switchChannels(int,int)
    if ((channel1>0) && (channel2>0) && (channel1<=nChannels) && (channel2<=nChannels)) {
    	int station1=channelOrder[channel1];
    	int station2=channelOrder[channel2];
    
    	setChannelOrder(channel1,station2);
    	setChannelOrder(channel2,station1);
    }
    //#]
}

int RtvDevice::getChannelOrder(int i1) const {
    return channelOrder[i1];
}

int RtvDevice::getSwitchChannelOne() const {
    return switchChannelOne;
}

void RtvDevice::setSwitchChannelOne(int p_switchChannelOne) {
    switchChannelOne = p_switchChannelOne;
    NOTIFY_SET_OPERATION;
}

int RtvDevice::getSwitchChannelTwo() const {
    return switchChannelTwo;
}

void RtvDevice::setSwitchChannelTwo(int p_switchChannelTwo) {
    switchChannelTwo = p_switchChannelTwo;
    NOTIFY_SET_OPERATION;
}

bool RtvDevice::startBehavior() {
    bool done = false;
    done = DeviceWithSettings::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRtvDevice::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("channel", x2String(myReal->channel));
    aomsAttributes->addAttribute("nSettings", x2String(myReal->nSettings));
    aomsAttributes->addAttribute("settings", array2String(2, myReal->settings, sizeof(int), &x2String));
    aomsAttributes->addAttribute("volume", x2String(myReal->volume));
    aomsAttributes->addAttribute("nChannels", x2String(myReal->nChannels));
    aomsAttributes->addAttribute("channelOrder", array2String(11, myReal->channelOrder, sizeof(int), &x2String));
    aomsAttributes->addAttribute("channelName", x2String(myReal->channelName));
    aomsAttributes->addAttribute("switchChannelOne", x2String(myReal->switchChannelOne));
    aomsAttributes->addAttribute("switchChannelTwo", x2String(myReal->switchChannelTwo));
    OMAnimatedDeviceWithSettings::serializeAttributes(aomsAttributes);
}

void OMAnimatedRtvDevice::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDeviceWithSettings::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(RtvDevice, DevicePkg, false, DeviceWithSettings, OMAnimatedDeviceWithSettings, OMAnimatedRtvDevice)

OMINIT_SUPERCLASS(DeviceWithSettings, OMAnimatedDeviceWithSettings)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedRtvDevice, DevicePkg_RtvDevice_setSwitchChannelOne_int, "setSwitchChannelOne", FALSE, "setSwitchChannelOne(int)", 1)

IMPLEMENT_OP_CALL(DevicePkg_RtvDevice_setSwitchChannelOne_int, RtvDevice, setSwitchChannelOne(p_switchChannelOne), NO_OP())

IMPLEMENT_META_OP(OMAnimatedRtvDevice, DevicePkg_RtvDevice_setSwitchChannelTwo_int, "setSwitchChannelTwo", FALSE, "setSwitchChannelTwo(int)", 1)

IMPLEMENT_OP_CALL(DevicePkg_RtvDevice_setSwitchChannelTwo_int, RtvDevice, setSwitchChannelTwo(p_switchChannelTwo), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\RtvDevice.cpp
*********************************************************************/
