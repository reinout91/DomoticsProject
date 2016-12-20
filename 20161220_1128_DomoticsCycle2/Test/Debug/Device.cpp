/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Device
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Device.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Device.h"
//## link itsController
#include "Controller.h"
//## link itsRoom
#include "Room.h"
//#[ ignore
#define DevicePkg_Device_Device_SERIALIZE OM_NO_OP

#define DevicePkg_Device_getThisDeviceStatus_SERIALIZE OM_NO_OP

#define DevicePkg_Device_switchThisDevice_SERIALIZE OM_NO_OP

#define DevicePkg_Device_turnThisDeviceOff_SERIALIZE OM_NO_OP

#define DevicePkg_Device_turnThisDeviceOn_SERIALIZE OM_NO_OP
//#]

//## package DevicePkg

//## class Device
Device::Device(IOxfActive* theActiveContext) : state(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Device, Device(), 0, DevicePkg_Device_Device_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    itsRoom = NULL;
}

Device::~Device() {
    NOTIFY_DESTRUCTOR(~Device, true);
    cleanUpRelations();
}

void Device::switchThisDevice() {
    NOTIFY_OPERATION(switchThisDevice, switchThisDevice(), 0, DevicePkg_Device_switchThisDevice_SERIALIZE);
    //#[ operation switchThisDevice()
    if (state)
    {
    	state = 0;    
    	this -> GEN(evTurnOffDevice);
    }
    else
    {
    	state = 1;       
    	this -> GEN(evTurnOnDevice);
    }
    //#]
}

void Device::turnThisDeviceOff() {
    NOTIFY_OPERATION(turnThisDeviceOff, turnThisDeviceOff(), 0, DevicePkg_Device_turnThisDeviceOff_SERIALIZE);
    //#[ operation turnThisDeviceOff()
    if (state == 1){
    	switchThisDevice();
    }
    //#]
}

void Device::turnThisDeviceOn() {
    NOTIFY_OPERATION(turnThisDeviceOn, turnThisDeviceOn(), 0, DevicePkg_Device_turnThisDeviceOn_SERIALIZE);
    //#[ operation turnThisDeviceOn()
    if (state == 0){
    	switchThisDevice(); 
    }	
    //#]
}

int Device::getState() const {
    return state;
}

void Device::setState(int p_state) {
    state = p_state;
    NOTIFY_SET_OPERATION;
}

Controller* Device::getItsController() const {
    return itsController;
}

void Device::setItsController(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_addItsDevice(this);
        }
    _setItsController(p_Controller);
}

Room* Device::getItsRoom() const {
    return itsRoom;
}

void Device::setItsRoom(Room* p_Room) {
    if(p_Room != NULL)
        {
            p_Room->_addItsDevice(this);
        }
    _setItsRoom(p_Room);
}

void Device::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            Controller* current = itsController;
            if(current != NULL)
                {
                    current->_removeItsDevice(this);
                }
            itsController = NULL;
        }
    if(itsRoom != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoom");
            Room* current = itsRoom;
            if(current != NULL)
                {
                    current->_removeItsDevice(this);
                }
            itsRoom = NULL;
        }
}

void Device::__setItsController(Controller* p_Controller) {
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

void Device::_setItsController(Controller* p_Controller) {
    if(itsController != NULL)
        {
            itsController->_removeItsDevice(this);
        }
    __setItsController(p_Controller);
}

void Device::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Device::__setItsRoom(Room* p_Room) {
    itsRoom = p_Room;
    if(p_Room != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoom", p_Room, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoom");
        }
}

void Device::_setItsRoom(Room* p_Room) {
    if(itsRoom != NULL)
        {
            itsRoom->_removeItsDevice(this);
        }
    __setItsRoom(p_Room);
}

void Device::_clearItsRoom() {
    NOTIFY_RELATION_CLEARED("itsRoom");
    itsRoom = NULL;
}

bool Device::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDevice::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
}

void OMAnimatedDevice::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    aomsRelations->addRelation("itsRoom", false, true);
    if(myReal->itsRoom)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoom);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Device, DevicePkg, DevicePkg, false, OMAnimatedDevice)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Device.cpp
*********************************************************************/
