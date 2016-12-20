/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: UserInterface
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\UserInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UserInterface.h"
//## auto_generated
#include "Controller.h"
//## link itsIController
#include "iController.h"
//#[ ignore
#define UserPkg_UserInterface_UserInterface_SERIALIZE OM_NO_OP

#define UserPkg_UserInterface_getDesiredDevice_SERIALIZE OM_NO_OP

#define UserPkg_UserInterface_getDesiredSetting_SERIALIZE OM_NO_OP

#define UserPkg_UserInterface_requestInput_SERIALIZE OM_NO_OP

#define OMAnim_UserPkg_UserInterface_setCurrentDevice_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentDevice)

#define OMAnim_UserPkg_UserInterface_setCurrentDevice_int_SERIALIZE_RET_VAL

#define OMAnim_UserPkg_UserInterface_setCurrentSetting_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentSetting)

#define OMAnim_UserPkg_UserInterface_setCurrentSetting_int_SERIALIZE_RET_VAL

#define OMAnim_UserPkg_UserInterface_setSettingValue_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_settingValue)

#define OMAnim_UserPkg_UserInterface_setSettingValue_int_SERIALIZE_RET_VAL
//#]

//## package UserPkg

//## class UserInterface
//#[ ignore
UserInterface::pControllerIn_C::pControllerIn_C() : _p_(0) {
    itsIController = NULL;
}

UserInterface::pControllerIn_C::~pControllerIn_C() {
    cleanUpRelations();
}

int UserInterface::pControllerIn_C::getDeviceSetting(int device, int setting) {
    int res = 0;
    if (itsIController != NULL) {
        res = itsIController->getDeviceSetting(device,setting);
    }
    return res;
}

iController* UserInterface::pControllerIn_C::getItsIController() {
    return this;
}

iController* UserInterface::pControllerIn_C::getOutBound() {
    return this;
}

void UserInterface::pControllerIn_C::setDeviceSetting(int device, int setting, int value) {
    
    if (itsIController != NULL) {
        itsIController->setDeviceSetting(device,setting,value);
    }
    
}

void UserInterface::pControllerIn_C::switchDevice(int device) {
    
    if (itsIController != NULL) {
        itsIController->switchDevice(device);
    }
    
}

void UserInterface::pControllerIn_C::turnDeviceOff(int device) {
    
    if (itsIController != NULL) {
        itsIController->turnDeviceOff(device);
    }
    
}

void UserInterface::pControllerIn_C::turnDeviceOn(int device) {
    
    if (itsIController != NULL) {
        itsIController->turnDeviceOn(device);
    }
    
}

void UserInterface::pControllerIn_C::setItsIController(iController* p_iController) {
    itsIController = p_iController;
}

void UserInterface::pControllerIn_C::cleanUpRelations() {
    if(itsIController != NULL)
        {
            itsIController = NULL;
        }
}

UserInterface::pControllerOut_C::pControllerOut_C() : _p_(0) {
    itsIUserInterface = NULL;
}

UserInterface::pControllerOut_C::~pControllerOut_C() {
    cleanUpRelations();
}

void UserInterface::pControllerOut_C::connectUserInterface(UserInterface* part) {
    setItsIUserInterface(part);
    
}

void UserInterface::pControllerOut_C::getDesiredDevice() {
    
    if (itsIUserInterface != NULL) {
        itsIUserInterface->getDesiredDevice();
    }
    
}

void UserInterface::pControllerOut_C::getDesiredSetting() {
    
    if (itsIUserInterface != NULL) {
        itsIUserInterface->getDesiredSetting();
    }
    
}

iUserInterface* UserInterface::pControllerOut_C::getItsIUserInterface() {
    return this;
}

void UserInterface::pControllerOut_C::setItsIUserInterface(iUserInterface* p_iUserInterface) {
    itsIUserInterface = p_iUserInterface;
}

void UserInterface::pControllerOut_C::cleanUpRelations() {
    if(itsIUserInterface != NULL)
        {
            itsIUserInterface = NULL;
        }
}
//#]

UserInterface::UserInterface(IOxfActive* theActiveContext) : settingValue(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UserInterface, UserInterface(), 0, UserPkg_UserInterface_UserInterface_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsIController = NULL;
    initRelations();
    initStatechart();
}

UserInterface::~UserInterface() {
    NOTIFY_DESTRUCTOR(~UserInterface, false);
    cleanUpRelations();
}

void UserInterface::getDesiredDevice() {
    NOTIFY_OPERATION(getDesiredDevice, getDesiredDevice(), 0, UserPkg_UserInterface_getDesiredDevice_SERIALIZE);
    //#[ operation getDesiredDevice()
    //#]
}

void UserInterface::getDesiredSetting() {
    NOTIFY_OPERATION(getDesiredSetting, getDesiredSetting(), 0, UserPkg_UserInterface_getDesiredSetting_SERIALIZE);
    //#[ operation getDesiredSetting()
    //#]
}

void UserInterface::requestInput() {
    NOTIFY_OPERATION(requestInput, requestInput(), 0, UserPkg_UserInterface_requestInput_SERIALIZE);
    //#[ operation requestInput()
    int action;
    char Device; 
    int deviceIndex;
    std::cout << "Type 0 for turning off, 1 for turning on, 2 for switching" << std::endl;
    std::cin >> action;
    std::cout << "Type first letter:" << std::endl;
    std::cin >> Device;
    switch (Device){
    	case 'k':
    		deviceIndex = 0;
    		break;
    	case 'l':
    		deviceIndex = 1;
    		break;
    	default:
    		std::cout << "Device not recognized, try again" << std::endl;
    		action = -1;
    		break;
    }
    switch (action){
    	case 0:
    		pControllerIn.turnDeviceOff(deviceIndex);  
    		break;
    	case 1:
    		pControllerIn.turnDeviceOn(deviceIndex);   
    		break;
    	case 2:
    		pControllerIn.switchDevice(deviceIndex);   
    		break;
    }
    //#]
}

UserInterface::pControllerIn_C* UserInterface::getPControllerIn() const {
    return (UserInterface::pControllerIn_C*) &pControllerIn;
}

UserInterface::pControllerIn_C* UserInterface::get_pControllerIn() const {
    return (UserInterface::pControllerIn_C*) &pControllerIn;
}

UserInterface::pControllerOut_C* UserInterface::getPControllerOut() const {
    return (UserInterface::pControllerOut_C*) &pControllerOut;
}

UserInterface::pControllerOut_C* UserInterface::get_pControllerOut() const {
    return (UserInterface::pControllerOut_C*) &pControllerOut;
}

int UserInterface::getCurrentDevice() const {
    return currentDevice;
}

void UserInterface::setCurrentDevice(int p_currentDevice) {
    currentDevice = p_currentDevice;
    NOTIFY_SET_OPERATION;
}

int UserInterface::getCurrentSetting() const {
    return currentSetting;
}

void UserInterface::setCurrentSetting(int p_currentSetting) {
    currentSetting = p_currentSetting;
    NOTIFY_SET_OPERATION;
}

int UserInterface::getSettingValue() const {
    return settingValue;
}

void UserInterface::setSettingValue(int p_settingValue) {
    settingValue = p_settingValue;
    NOTIFY_SET_OPERATION;
}

iController* UserInterface::getItsIController() const {
    return itsIController;
}

void UserInterface::setItsIController(iController* p_iController) {
    if(p_iController != NULL)
        {
            p_iController->_setItsUserInterface(this);
        }
    _setItsIController(p_iController);
}

bool UserInterface::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UserInterface::initRelations() {
    if (get_pControllerOut() != NULL) {
        get_pControllerOut()->connectUserInterface(this);
    }
}

void UserInterface::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UserInterface::cleanUpRelations() {
    if(itsIController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIController");
            UserInterface* p_UserInterface = itsIController->getItsUserInterface();
            if(p_UserInterface != NULL)
                {
                    itsIController->__setItsUserInterface(NULL);
                }
            itsIController = NULL;
        }
}

void UserInterface::__setItsIController(iController* p_iController) {
    itsIController = p_iController;
    if(p_iController != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsIController", p_iController, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsIController");
        }
}

void UserInterface::_setItsIController(iController* p_iController) {
    if(itsIController != NULL)
        {
            itsIController->__setItsUserInterface(NULL);
        }
    __setItsIController(p_iController);
}

void UserInterface::_clearItsIController() {
    NOTIFY_RELATION_CLEARED("itsIController");
    itsIController = NULL;
}

void UserInterface::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        //#[ transition 0 
        currentDevice = 0;
        //#]
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UserInterface::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State idle
    if(rootState_active == idle)
        {
            res = idle_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UserInterface::idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evUserRequestTurnDeviceOff_UserPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.idle");
            //#[ transition 2 
            pControllerIn.turnDeviceOff(currentDevice);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.idle");
            rootState_subState = idle;
            rootState_active = idle;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evUserRequestTurnDeviceOn_UserPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.idle");
            //#[ transition 3 
            pControllerIn.turnDeviceOn(currentDevice);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.idle");
            rootState_subState = idle;
            rootState_active = idle;
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evUserRequestSetDeviceSetting_UserPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_EXITED("ROOT.idle");
            //#[ transition 4 
            pControllerIn.setDeviceSetting(currentDevice, currentSetting, settingValue);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.idle");
            rootState_subState = idle;
            rootState_active = idle;
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evUserRequestSwitchDevice_UserPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.idle");
            //#[ transition 1 
            pControllerIn.switchDevice(currentDevice);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.idle");
            rootState_subState = idle;
            rootState_active = idle;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("currentDevice", x2String(myReal->currentDevice));
    aomsAttributes->addAttribute("currentSetting", x2String(myReal->currentSetting));
    aomsAttributes->addAttribute("settingValue", x2String(myReal->settingValue));
    OMAnimatediUserInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedUserInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsIController", false, true);
    if(myReal->itsIController)
        {
            aomsRelations->ADD_ITEM(myReal->itsIController);
        }
    OMAnimatediUserInterface::serializeRelations(aomsRelations);
}

void OMAnimatedUserInterface::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == UserInterface::idle)
        {
            idle_serializeStates(aomsState);
        }
}

void OMAnimatedUserInterface::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(UserInterface, UserPkg, false, iUserInterface, OMAnimatediUserInterface, OMAnimatedUserInterface)

OMINIT_SUPERCLASS(iUserInterface, OMAnimatediUserInterface)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedUserInterface, UserPkg_UserInterface_setCurrentDevice_int, "setCurrentDevice", FALSE, "setCurrentDevice(int)", 1)

IMPLEMENT_OP_CALL(UserPkg_UserInterface_setCurrentDevice_int, UserInterface, setCurrentDevice(p_currentDevice), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUserInterface, UserPkg_UserInterface_setCurrentSetting_int, "setCurrentSetting", FALSE, "setCurrentSetting(int)", 1)

IMPLEMENT_OP_CALL(UserPkg_UserInterface_setCurrentSetting_int, UserInterface, setCurrentSetting(p_currentSetting), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUserInterface, UserPkg_UserInterface_setSettingValue_int, "setSettingValue", FALSE, "setSettingValue(int)", 1)

IMPLEMENT_OP_CALL(UserPkg_UserInterface_setSettingValue_int, UserInterface, setSettingValue(p_settingValue), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\UserInterface.cpp
*********************************************************************/
