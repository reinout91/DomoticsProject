/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Controller
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Controller.h"
//## link itsDevice
#include "Device.h"
//## link itsSensor
#include "Sensor.h"
//## auto_generated
#include "UserInterface.h"
//## link itsTelevision
#include "Television.h"
//## link itsIUserInterface
#include "iUserInterface.h"
//## link itsLight
#include "Light.h"
//#[ ignore
#define ControllerPkg_Controller_getDeviceSetting_SERIALIZE \
    aomsmethod->addAttribute("device", x2String(device));\
    aomsmethod->addAttribute("setting", x2String(setting));
#define ControllerPkg_Controller_setDeviceSetting_SERIALIZE \
    aomsmethod->addAttribute("device", x2String(device));\
    aomsmethod->addAttribute("setting", x2String(setting));\
    aomsmethod->addAttribute("value", x2String(value));
#define ControllerPkg_Controller_Controller_SERIALIZE OM_NO_OP

#define ControllerPkg_Controller_showState_SERIALIZE OM_NO_OP

#define ControllerPkg_Controller_switchDevice_SERIALIZE aomsmethod->addAttribute("device", x2String(device));

#define ControllerPkg_Controller_turnDeviceOff_SERIALIZE aomsmethod->addAttribute("device", x2String(device));

#define ControllerPkg_Controller_turnDeviceOn_SERIALIZE aomsmethod->addAttribute("device", x2String(device));
//#]

//## package ControllerPkg

//## class Controller
//#[ ignore
Controller::pUIOut_C::pUIOut_C() : _p_(0) {
    itsIController = NULL;
}

Controller::pUIOut_C::~pUIOut_C() {
    cleanUpRelations();
}

void Controller::pUIOut_C::connectController(Controller* part) {
    setItsIController(part);
    
}

int Controller::pUIOut_C::getDeviceSetting(int device, int setting) {
    int res = 0;
    if (itsIController != NULL) {
        res = itsIController->getDeviceSetting(device,setting);
    }
    return res;
}

iController* Controller::pUIOut_C::getItsIController() {
    return this;
}

void Controller::pUIOut_C::setDeviceSetting(int device, int setting, int value) {
    
    if (itsIController != NULL) {
        itsIController->setDeviceSetting(device,setting,value);
    }
    
}

void Controller::pUIOut_C::switchDevice(int device) {
    
    if (itsIController != NULL) {
        itsIController->switchDevice(device);
    }
    
}

void Controller::pUIOut_C::turnDeviceOff(int device) {
    
    if (itsIController != NULL) {
        itsIController->turnDeviceOff(device);
    }
    
}

void Controller::pUIOut_C::turnDeviceOn(int device) {
    
    if (itsIController != NULL) {
        itsIController->turnDeviceOn(device);
    }
    
}

void Controller::pUIOut_C::setItsIController(iController* p_iController) {
    itsIController = p_iController;
}

void Controller::pUIOut_C::cleanUpRelations() {
    if(itsIController != NULL)
        {
            itsIController = NULL;
        }
}

Controller::pUIIn_C::pUIIn_C() : _p_(0) {
    itsIUserInterface = NULL;
}

Controller::pUIIn_C::~pUIIn_C() {
    cleanUpRelations();
}

void Controller::pUIIn_C::getDesiredDevice() {
    
    if (itsIUserInterface != NULL) {
        itsIUserInterface->getDesiredDevice();
    }
    
}

void Controller::pUIIn_C::getDesiredSetting() {
    
    if (itsIUserInterface != NULL) {
        itsIUserInterface->getDesiredSetting();
    }
    
}

iUserInterface* Controller::pUIIn_C::getItsIUserInterface() {
    return this;
}

iUserInterface* Controller::pUIIn_C::getOutBound() {
    return this;
}

void Controller::pUIIn_C::setItsIUserInterface(iUserInterface* p_iUserInterface) {
    itsIUserInterface = p_iUserInterface;
}

void Controller::pUIIn_C::cleanUpRelations() {
    if(itsIUserInterface != NULL)
        {
            itsIUserInterface = NULL;
        }
}
//#]

Controller::~Controller() {
    NOTIFY_DESTRUCTOR(~Controller, false);
    cleanUpRelations();
}

void Controller::cleanUpRelations() {
    {
        OMIterator<Device*> iter(itsDevice);
        while (*iter){
            Controller* p_Controller = (*iter)->getItsController();
            if(p_Controller != NULL)
                {
                    (*iter)->__setItsController(NULL);
                }
            iter++;
        }
        itsDevice.removeAll();
    }
    if(itsIUserInterface != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsIUserInterface");
            Controller* p_Controller = itsIUserInterface->getItsController();
            if(p_Controller != NULL)
                {
                    itsIUserInterface->__setItsController(NULL);
                }
            itsIUserInterface = NULL;
        }
    if(itsLight != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLight");
            Controller* p_Controller = itsLight->getItsController_1();
            if(p_Controller != NULL)
                {
                    itsLight->__setItsController_1(NULL);
                }
            itsLight = NULL;
        }
    {
        OMIterator<Sensor*> iter(itsSensor);
        while (*iter){
            Controller* p_Controller = (*iter)->getItsController();
            if(p_Controller != NULL)
                {
                    (*iter)->__setItsController(NULL);
                }
            iter++;
        }
        itsSensor.removeAll();
    }
    if(itsTelevision != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTelevision");
            Controller* p_Controller = itsTelevision->getItsController_1();
            if(p_Controller != NULL)
                {
                    itsTelevision->__setItsController_1(NULL);
                }
            itsTelevision = NULL;
        }
}

void Controller::showState() {
    NOTIFY_OPERATION(showState, showState(), 0, ControllerPkg_Controller_showState_SERIALIZE);
    //#[ operation showState()
    int stateOne = itsDevice[0] -> getThisDeviceStatus();
    int stateTwo = itsDevice[1] -> getThisDeviceStatus();      
    std::cout << "  Device 1 state: " << stateOne
    	<< "  Device 2 state: " << stateTwo << std::endl;
    //#]
}

Controller::Controller() {
    NOTIFY_CONSTRUCTOR(Controller, Controller(), 0, ControllerPkg_Controller_Controller_SERIALIZE);
    itsIUserInterface = NULL;
    itsLight = NULL;
    itsTelevision = NULL;
    initRelations();
}

int Controller::getDeviceSetting(int device, int setting) {
    NOTIFY_OPERATION(getDeviceSetting, getDeviceSetting(int,int), 2, ControllerPkg_Controller_getDeviceSetting_SERIALIZE);
    //#[ operation getDeviceSetting(int,int)
    return ((DeviceWithSettings*)itsDevice[device]) -> getSetting(setting);
    //#]
}

void Controller::setDeviceSetting(int device, int setting, int value) {
    NOTIFY_OPERATION(setDeviceSetting, setDeviceSetting(int,int,int), 3, ControllerPkg_Controller_setDeviceSetting_SERIALIZE);
    //#[ operation setDeviceSetting(int,int,int)
    DeviceWithSettings* pDevWithSet = ((DeviceWithSettings*)itsDevice[device]);
    if ((setting >= 0) && (setting < pDevWithSet -> getNSettings())){
    	pDevWithSet -> setSetting(setting, value);
    }
    //#]
}

void Controller::switchDevice(int device) {
    NOTIFY_OPERATION(switchDevice, switchDevice(int), 1, ControllerPkg_Controller_switchDevice_SERIALIZE);
    //#[ operation switchDevice(int)
    itsDevice[device] -> switchThisDevice();
    //#]
}

void Controller::turnDeviceOff(int device) {
    NOTIFY_OPERATION(turnDeviceOff, turnDeviceOff(int), 1, ControllerPkg_Controller_turnDeviceOff_SERIALIZE);
    //#[ operation turnDeviceOff(int)
    itsDevice[device] -> turnThisDeviceOff();
    //#]
}

void Controller::turnDeviceOn(int device) {
    NOTIFY_OPERATION(turnDeviceOn, turnDeviceOn(int), 1, ControllerPkg_Controller_turnDeviceOn_SERIALIZE);
    //#[ operation turnDeviceOn(int)
    itsDevice[device] -> turnThisDeviceOn();
    //#]
}

OMIterator<Device*> Controller::getItsDevice() const {
    OMIterator<Device*> iter(itsDevice);
    return iter;
}

void Controller::addItsDevice(Device* p_Device) {
    if(p_Device != NULL)
        {
            p_Device->_setItsController(this);
        }
    _addItsDevice(p_Device);
}

void Controller::removeItsDevice(Device* p_Device) {
    if(p_Device != NULL)
        {
            p_Device->__setItsController(NULL);
        }
    _removeItsDevice(p_Device);
}

void Controller::clearItsDevice() {
    OMIterator<Device*> iter(itsDevice);
    while (*iter){
        (*iter)->_clearItsController();
        iter++;
    }
    _clearItsDevice();
}

OMIterator<Sensor*> Controller::getItsSensor() const {
    OMIterator<Sensor*> iter(itsSensor);
    return iter;
}

void Controller::addItsSensor(Sensor* p_Sensor) {
    if(p_Sensor != NULL)
        {
            p_Sensor->_setItsController(this);
        }
    _addItsSensor(p_Sensor);
}

void Controller::removeItsSensor(Sensor* p_Sensor) {
    if(p_Sensor != NULL)
        {
            p_Sensor->__setItsController(NULL);
        }
    _removeItsSensor(p_Sensor);
}

void Controller::clearItsSensor() {
    OMIterator<Sensor*> iter(itsSensor);
    while (*iter){
        (*iter)->_clearItsController();
        iter++;
    }
    _clearItsSensor();
}

void Controller::initRelations() {
    if (get_pUIOut() != NULL) {
        get_pUIOut()->connectController(this);
    }
}

void Controller::_addItsDevice(Device* p_Device) {
    if(p_Device != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDevice", p_Device, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDevice");
        }
    itsDevice.add(p_Device);
}

void Controller::_removeItsDevice(Device* p_Device) {
    NOTIFY_RELATION_ITEM_REMOVED("itsDevice", p_Device);
    itsDevice.remove(p_Device);
}

void Controller::_clearItsDevice() {
    NOTIFY_RELATION_CLEARED("itsDevice");
    itsDevice.removeAll();
}

void Controller::_addItsSensor(Sensor* p_Sensor) {
    if(p_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensor", p_Sensor, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensor");
        }
    itsSensor.add(p_Sensor);
}

void Controller::_removeItsSensor(Sensor* p_Sensor) {
    NOTIFY_RELATION_ITEM_REMOVED("itsSensor", p_Sensor);
    itsSensor.remove(p_Sensor);
}

void Controller::_clearItsSensor() {
    NOTIFY_RELATION_CLEARED("itsSensor");
    itsSensor.removeAll();
}

Controller::pUIOut_C* Controller::getPUIOut() const {
    return (Controller::pUIOut_C*) &pUIOut;
}

Controller::pUIOut_C* Controller::get_pUIOut() const {
    return (Controller::pUIOut_C*) &pUIOut;
}

Controller::pUIIn_C* Controller::getPUIIn() const {
    return (Controller::pUIIn_C*) &pUIIn;
}

Controller::pUIIn_C* Controller::get_pUIIn() const {
    return (Controller::pUIIn_C*) &pUIIn;
}

Television* Controller::getItsTelevision() const {
    return itsTelevision;
}

void Controller::setItsTelevision(Television* p_Television) {
    if(p_Television != NULL)
        {
            p_Television->_setItsController_1(this);
        }
    _setItsTelevision(p_Television);
}

void Controller::__setItsTelevision(Television* p_Television) {
    itsTelevision = p_Television;
    if(p_Television != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTelevision", p_Television, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTelevision");
        }
}

void Controller::_setItsTelevision(Television* p_Television) {
    if(itsTelevision != NULL)
        {
            itsTelevision->__setItsController_1(NULL);
        }
    __setItsTelevision(p_Television);
}

void Controller::_clearItsTelevision() {
    NOTIFY_RELATION_CLEARED("itsTelevision");
    itsTelevision = NULL;
}

iUserInterface* Controller::getItsIUserInterface() const {
    return itsIUserInterface;
}

void Controller::setItsIUserInterface(iUserInterface* p_iUserInterface) {
    if(p_iUserInterface != NULL)
        {
            p_iUserInterface->_setItsController(this);
        }
    _setItsIUserInterface(p_iUserInterface);
}

Light* Controller::getItsLight() const {
    return itsLight;
}

void Controller::setItsLight(Light* p_Light) {
    if(p_Light != NULL)
        {
            p_Light->_setItsController_1(this);
        }
    _setItsLight(p_Light);
}

void Controller::__setItsIUserInterface(iUserInterface* p_iUserInterface) {
    itsIUserInterface = p_iUserInterface;
    if(p_iUserInterface != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsIUserInterface", p_iUserInterface, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsIUserInterface");
        }
}

void Controller::_setItsIUserInterface(iUserInterface* p_iUserInterface) {
    if(itsIUserInterface != NULL)
        {
            itsIUserInterface->__setItsController(NULL);
        }
    __setItsIUserInterface(p_iUserInterface);
}

void Controller::_clearItsIUserInterface() {
    NOTIFY_RELATION_CLEARED("itsIUserInterface");
    itsIUserInterface = NULL;
}

void Controller::__setItsLight(Light* p_Light) {
    itsLight = p_Light;
    if(p_Light != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLight", p_Light, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLight");
        }
}

void Controller::_setItsLight(Light* p_Light) {
    if(itsLight != NULL)
        {
            itsLight->__setItsController_1(NULL);
        }
    __setItsLight(p_Light);
}

void Controller::_clearItsLight() {
    NOTIFY_RELATION_CLEARED("itsLight");
    itsLight = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatediController::serializeAttributes(aomsAttributes);
}

void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDevice", false, false);
    {
        OMIterator<Device*> iter(myReal->itsDevice);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsSensor", false, false);
    {
        OMIterator<Sensor*> iter(myReal->itsSensor);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsTelevision", false, true);
    if(myReal->itsTelevision)
        {
            aomsRelations->ADD_ITEM(myReal->itsTelevision);
        }
    aomsRelations->addRelation("itsIUserInterface", false, true);
    if(myReal->itsIUserInterface)
        {
            aomsRelations->ADD_ITEM(myReal->itsIUserInterface);
        }
    aomsRelations->addRelation("itsLight", false, true);
    if(myReal->itsLight)
        {
            aomsRelations->ADD_ITEM(myReal->itsLight);
        }
    OMAnimatediController::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Controller, ControllerPkg, false, iController, OMAnimatediController, OMAnimatedController)

OMINIT_SUPERCLASS(iController, OMAnimatediController)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Controller.cpp
*********************************************************************/
