/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: iUserInterface
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\iUserInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iUserInterface.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define UserPkg_iUserInterface_iUserInterface_SERIALIZE OM_NO_OP

#define UserPkg_iUserInterface_getDesiredDevice_SERIALIZE OM_NO_OP

#define UserPkg_iUserInterface_getDesiredSetting_SERIALIZE OM_NO_OP
//#]

//## package UserPkg

//## class iUserInterface
iUserInterface::iUserInterface() {
    NOTIFY_CONSTRUCTOR(iUserInterface, iUserInterface(), 0, UserPkg_iUserInterface_iUserInterface_SERIALIZE);
    itsController = NULL;
}

iUserInterface::~iUserInterface() {
    NOTIFY_DESTRUCTOR(~iUserInterface, true);
    cleanUpRelations();
}

Controller* iUserInterface::getItsController() const {
    return itsController;
}

void iUserInterface::setItsController(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_setItsIUserInterface(this);
        }
    _setItsController(p_Controller);
}

void iUserInterface::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            iUserInterface* p_iUserInterface = itsController->getItsIUserInterface();
            if(p_iUserInterface != NULL)
                {
                    itsController->__setItsIUserInterface(NULL);
                }
            itsController = NULL;
        }
}

void iUserInterface::__setItsController(Controller* p_Controller) {
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

void iUserInterface::_setItsController(Controller* p_Controller) {
    if(itsController != NULL)
        {
            itsController->__setItsIUserInterface(NULL);
        }
    __setItsController(p_Controller);
}

void iUserInterface::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatediUserInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}
//#]

IMPLEMENT_META_P(iUserInterface, UserPkg, UserPkg, false, OMAnimatediUserInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\iUserInterface.cpp
*********************************************************************/
