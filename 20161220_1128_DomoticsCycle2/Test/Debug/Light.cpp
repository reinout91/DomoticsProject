/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Light
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Light.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Light.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_Light_Light_SERIALIZE OM_NO_OP

#define DevicePkg_Light_getThisDeviceStatus_SERIALIZE OM_NO_OP
//#]

//## package DevicePkg

//## class Light
Light::Light(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Light, Light(), 0, DevicePkg_Light_Light_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController_1 = NULL;
}

Light::~Light() {
    NOTIFY_DESTRUCTOR(~Light, false);
    cleanUpRelations();
}

int Light::getThisDeviceStatus() {
    NOTIFY_OPERATION(getThisDeviceStatus, getThisDeviceStatus(), 0, DevicePkg_Light_getThisDeviceStatus_SERIALIZE);
    //#[ operation getThisDeviceStatus()
    return state;
    //#]
}

bool Light::startBehavior() {
    bool done = false;
    done = Device::startBehavior();
    return done;
}

Controller* Light::getItsController_1() const {
    return itsController_1;
}

void Light::setItsController_1(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_setItsLight(this);
        }
    _setItsController_1(p_Controller);
}

void Light::cleanUpRelations() {
    if(itsController_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_1");
            Light* p_Light = itsController_1->getItsLight();
            if(p_Light != NULL)
                {
                    itsController_1->__setItsLight(NULL);
                }
            itsController_1 = NULL;
        }
}

void Light::__setItsController_1(Controller* p_Controller) {
    itsController_1 = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController_1", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController_1");
        }
}

void Light::_setItsController_1(Controller* p_Controller) {
    if(itsController_1 != NULL)
        {
            itsController_1->__setItsLight(NULL);
        }
    __setItsController_1(p_Controller);
}

void Light::_clearItsController_1() {
    NOTIFY_RELATION_CLEARED("itsController_1");
    itsController_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLight::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedLight::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_1", false, true);
    if(myReal->itsController_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_1);
        }
    OMAnimatedDevice::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(Light, DevicePkg, false, Device, OMAnimatedDevice, OMAnimatedLight)

OMINIT_SUPERCLASS(Device, OMAnimatedDevice)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Light.cpp
*********************************************************************/
