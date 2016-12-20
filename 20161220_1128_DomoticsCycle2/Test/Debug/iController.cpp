/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: iController
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\iController.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iController.h"
//## link itsController
#include "Controller.h"
//## link itsUserInterface
#include "UserInterface.h"
//#[ ignore
#define ControllerPkg_iController_getDeviceSetting_SERIALIZE \
    aomsmethod->addAttribute("device", x2String(device));\
    aomsmethod->addAttribute("setting", x2String(setting));
#define ControllerPkg_iController_setDeviceSetting_SERIALIZE \
    aomsmethod->addAttribute("device", x2String(device));\
    aomsmethod->addAttribute("setting", x2String(setting));\
    aomsmethod->addAttribute("value", x2String(value));
#define ControllerPkg_iController_iController_SERIALIZE OM_NO_OP

#define ControllerPkg_iController_switchDevice_SERIALIZE aomsmethod->addAttribute("device", x2String(device));

#define ControllerPkg_iController_turnDeviceOff_SERIALIZE aomsmethod->addAttribute("device", x2String(device));

#define ControllerPkg_iController_turnDeviceOn_SERIALIZE aomsmethod->addAttribute("device", x2String(device));
//#]

//## package ControllerPkg

//## class iController
iController::iController() {
    NOTIFY_CONSTRUCTOR(iController, iController(), 0, ControllerPkg_iController_iController_SERIALIZE);
    itsController = NULL;
    itsUserInterface = NULL;
}

iController::~iController() {
    NOTIFY_DESTRUCTOR(~iController, true);
    cleanUpRelations();
}

Controller* iController::getItsController() const {
    return itsController;
}

void iController::setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

UserInterface* iController::getItsUserInterface() const {
    return itsUserInterface;
}

void iController::setItsUserInterface(UserInterface* p_UserInterface) {
    if(p_UserInterface != NULL)
        {
            p_UserInterface->_setItsIController(this);
        }
    _setItsUserInterface(p_UserInterface);
}

void iController::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
    if(itsUserInterface != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUserInterface");
            iController* p_iController = itsUserInterface->getItsIController();
            if(p_iController != NULL)
                {
                    itsUserInterface->__setItsIController(NULL);
                }
            itsUserInterface = NULL;
        }
}

void iController::__setItsUserInterface(UserInterface* p_UserInterface) {
    itsUserInterface = p_UserInterface;
    if(p_UserInterface != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUserInterface", p_UserInterface, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUserInterface");
        }
}

void iController::_setItsUserInterface(UserInterface* p_UserInterface) {
    if(itsUserInterface != NULL)
        {
            itsUserInterface->__setItsIController(NULL);
        }
    __setItsUserInterface(p_UserInterface);
}

void iController::_clearItsUserInterface() {
    NOTIFY_RELATION_CLEARED("itsUserInterface");
    itsUserInterface = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatediController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    aomsRelations->addRelation("itsUserInterface", false, true);
    if(myReal->itsUserInterface)
        {
            aomsRelations->ADD_ITEM(myReal->itsUserInterface);
        }
}
//#]

IMPLEMENT_META_P(iController, ControllerPkg, ControllerPkg, false, OMAnimatediController)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\iController.cpp
*********************************************************************/
