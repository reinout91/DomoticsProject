/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: UserInterface
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\UserInterface.h
*********************************************************************/

#ifndef UserInterface_H
#define UserInterface_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class UserInterface
#include "iUserInterface.h"
//## class pControllerIn_C
#include "iController.h"
//## auto_generated
class Controller;

//## auto_generated
class UserInterface;

//## link itsIController
class iController;

//#[ ignore
#define OMAnim_UserPkg_UserInterface_setCurrentDevice_int_ARGS_DECLARATION int p_currentDevice;

#define OMAnim_UserPkg_UserInterface_setCurrentSetting_int_ARGS_DECLARATION int p_currentSetting;

#define OMAnim_UserPkg_UserInterface_setSettingValue_int_ARGS_DECLARATION int p_settingValue;
//#]

//## package UserPkg

//## class UserInterface
class UserInterface : public OMReactive, public iUserInterface {
public :

//#[ ignore
    //## package UserPkg
    class pControllerIn_C : public iController {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pControllerIn_C();
        
        //## auto_generated
        virtual ~pControllerIn_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual int getDeviceSetting(int device, int setting);
        
        //## auto_generated
        iController* getItsIController();
        
        //## auto_generated
        iController* getOutBound();
        
        //## auto_generated
        virtual void setDeviceSetting(int device, int setting, int value);
        
        //## auto_generated
        virtual void switchDevice(int device);
        
        //## auto_generated
        virtual void turnDeviceOff(int device);
        
        //## auto_generated
        virtual void turnDeviceOn(int device);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIController(iController* p_iController);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iController* itsIController;		//## link itsIController
    };
    
    //## package UserPkg
    class pControllerOut_C : public iUserInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pControllerOut_C();
        
        //## auto_generated
        virtual ~pControllerOut_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUserInterface(UserInterface* part);
        
        //## auto_generated
        virtual void getDesiredDevice();
        
        //## auto_generated
        virtual void getDesiredSetting();
        
        //## auto_generated
        iUserInterface* getItsIUserInterface();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIUserInterface(iUserInterface* p_iUserInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iUserInterface* itsIUserInterface;		//## link itsIUserInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserInterface(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~UserInterface();
    
    ////    Operations    ////
    
    //## operation getDesiredDevice()
    void getDesiredDevice();
    
    //## operation getDesiredSetting()
    void getDesiredSetting();
    
    //## operation requestInput()
    void requestInput();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pControllerIn_C* getPControllerIn() const;
    
    //## auto_generated
    pControllerIn_C* get_pControllerIn() const;
    
    //## auto_generated
    pControllerOut_C* getPControllerOut() const;
    
    //## auto_generated
    pControllerOut_C* get_pControllerOut() const;
    
    //## auto_generated
    int getCurrentDevice() const;
    
    //## auto_generated
    void setCurrentDevice(int p_currentDevice);
    
    //## auto_generated
    int getCurrentSetting() const;
    
    //## auto_generated
    void setCurrentSetting(int p_currentSetting);
    
    //## auto_generated
    int getSettingValue() const;
    
    //## auto_generated
    void setSettingValue(int p_settingValue);
    
    //## auto_generated
    iController* getItsIController() const;
    
    //## auto_generated
    void setItsIController(iController* p_iController);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int currentDevice;		//## attribute currentDevice
    
    int currentSetting;		//## attribute currentSetting
    
    int settingValue;		//## attribute settingValue
    
    ////    Relations and components    ////
    
    iController* itsIController;		//## link itsIController
    
//#[ ignore
    pControllerIn_C pControllerIn;
    
    pControllerOut_C pControllerOut;
//#]

    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsIController(iController* p_iController);
    
    //## auto_generated
    void _setItsIController(iController* p_iController);
    
    //## auto_generated
    void _clearItsIController();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus idle_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UserInterface_Enum {
        OMNonState = 0,
        idle = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(UserPkg_UserInterface_setCurrentDevice_int)

DECLARE_OPERATION_CLASS(UserPkg_UserInterface_setCurrentSetting_int)

DECLARE_OPERATION_CLASS(UserPkg_UserInterface_setSettingValue_int)

//#[ ignore
class OMAnimatedUserInterface : public OMAnimatediUserInterface {
    DECLARE_REACTIVE_META(UserInterface, OMAnimatedUserInterface)
    
    DECLARE_META_OP(UserPkg_UserInterface_setCurrentDevice_int)
    
    DECLARE_META_OP(UserPkg_UserInterface_setCurrentSetting_int)
    
    DECLARE_META_OP(UserPkg_UserInterface_setSettingValue_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UserInterface::rootState_IN() const {
    return true;
}

inline bool UserInterface::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\UserInterface.h
*********************************************************************/
