/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: RtvDevice
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\RtvDevice.h
*********************************************************************/

#ifndef RtvDevice_H
#define RtvDevice_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class RtvDevice
#include "DeviceWithSettings.h"
//#[ ignore
#define OMAnim_DevicePkg_RtvDevice_setSwitchChannelOne_int_ARGS_DECLARATION int p_switchChannelOne;

#define OMAnim_DevicePkg_RtvDevice_setSwitchChannelTwo_int_ARGS_DECLARATION int p_switchChannelTwo;
//#]

//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class RtvDevice
class RtvDevice : public DeviceWithSettings {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRtvDevice;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~RtvDevice();
    
    ////    Operations    ////
    
    //## operation getSetting(int)
    int getSetting(int setting);
    
    //## operation getThisDeviceStatus()
    int getThisDeviceStatus();
    
    //## operation setSetting(int,int)
    void setSetting(int setting, int value);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getChannel() const;
    
    //## auto_generated
    void setChannel(int p_channel);
    
    //## auto_generated
    const int getNSettings() const;
    
    //## auto_generated
    int getSettings(int i1) const;
    
    //## auto_generated
    void setSettings(int i1, int p_settings);
    
    //## auto_generated
    int getVolume() const;
    
    //## auto_generated
    void setVolume(int p_volume);
    
    ////    Attributes    ////

protected :

    int channel;		//## attribute channel
    
    const int nSettings;		//## attribute nSettings
    
    int settings[2];		//## attribute settings
    
    int volume;		//## attribute volume

public :

    //## operation setChannelOrder(int,int)
    void setChannelOrder(int setToThisChannel, int tvStation);
    
    //## auto_generated
    char* getChannelName() const;
    
    //## auto_generated
    void setChannelName(char* p_channelName);
    
    //## auto_generated
    int getNChannels() const;
    
    //## auto_generated
    void setNChannels(int p_nChannels);

protected :

    int nChannels;		//## attribute nChannels

public :

    //## auto_generated
    RtvDevice(IOxfActive* theActiveContext = 0);
    
    //## operation setChannelName(int)
    void setChannelName(int channelNumber);
    
    //## operation switchChannels(int,int)
    void switchChannels(int channel1, int channel2);
    
    //## auto_generated
    int getChannelOrder(int i1) const;
    
    //## auto_generated
    int getSwitchChannelOne() const;
    
    //## auto_generated
    void setSwitchChannelOne(int p_switchChannelOne);
    
    //## auto_generated
    int getSwitchChannelTwo() const;
    
    //## auto_generated
    void setSwitchChannelTwo(int p_switchChannelTwo);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    char* channelName;		//## attribute channelName
    
    int channelOrder[11];		//## attribute channelOrder
    
    int switchChannelOne;		//## attribute switchChannelOne
    
    int switchChannelTwo;		//## attribute switchChannelTwo
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(DevicePkg_RtvDevice_setSwitchChannelOne_int)

DECLARE_OPERATION_CLASS(DevicePkg_RtvDevice_setSwitchChannelTwo_int)

//#[ ignore
class OMAnimatedRtvDevice : public OMAnimatedDeviceWithSettings {
    DECLARE_META(RtvDevice, OMAnimatedRtvDevice)
    
    DECLARE_META_OP(DevicePkg_RtvDevice_setSwitchChannelOne_int)
    
    DECLARE_META_OP(DevicePkg_RtvDevice_setSwitchChannelTwo_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\RtvDevice.h
*********************************************************************/
