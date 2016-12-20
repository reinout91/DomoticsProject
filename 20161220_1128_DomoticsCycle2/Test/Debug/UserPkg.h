/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: UserPkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\UserPkg.h
*********************************************************************/

#ifndef UserPkg_H
#define UserPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Admin;

//## auto_generated
class Login;

//## auto_generated
class Member;

//## auto_generated
class User;

//## auto_generated
class UserInterface;

//## auto_generated
class UserList;

//## auto_generated
class iUserInterface;

//#[ ignore
#define evResetUI_UserPkg_id 28001

#define evUserRequestSwitchDevice_UserPkg_id 28002

#define evUserRequestTurnDeviceOff_UserPkg_id 28003

#define evUserRequestSetDeviceSetting_UserPkg_id 28004

#define evUserRequestTurnDeviceOn_UserPkg_id 28005
//#]

//## package UserPkg



//## event evResetUI()
class evResetUI : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevResetUI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evResetUI();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevResetUI : virtual public AOMEvent {
    DECLARE_META_EVENT(evResetUI)
};
//#]
#endif // _OMINSTRUMENT

//## event evUserRequestSwitchDevice()
class evUserRequestSwitchDevice : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevUserRequestSwitchDevice;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evUserRequestSwitchDevice();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevUserRequestSwitchDevice : virtual public AOMEvent {
    DECLARE_META_EVENT(evUserRequestSwitchDevice)
};
//#]
#endif // _OMINSTRUMENT

//## event evUserRequestTurnDeviceOff()
class evUserRequestTurnDeviceOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevUserRequestTurnDeviceOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evUserRequestTurnDeviceOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevUserRequestTurnDeviceOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evUserRequestTurnDeviceOff)
};
//#]
#endif // _OMINSTRUMENT

//## event evUserRequestSetDeviceSetting()
class evUserRequestSetDeviceSetting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevUserRequestSetDeviceSetting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evUserRequestSetDeviceSetting();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevUserRequestSetDeviceSetting : virtual public AOMEvent {
    DECLARE_META_EVENT(evUserRequestSetDeviceSetting)
};
//#]
#endif // _OMINSTRUMENT

//## event evUserRequestTurnDeviceOn()
class evUserRequestTurnDeviceOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevUserRequestTurnDeviceOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evUserRequestTurnDeviceOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevUserRequestTurnDeviceOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evUserRequestTurnDeviceOn)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\UserPkg.h
*********************************************************************/
