/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Sensor
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensor.h"
//## link itsController
#include "Controller.h"
//## link itsRoom
#include "Room.h"
//#[ ignore
#define SensorPkg_Sensor_Sensor_SERIALIZE OM_NO_OP
//#]

//## package SensorPkg

//## class Sensor
Sensor::Sensor(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Sensor, Sensor(), 0, SensorPkg_Sensor_Sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    itsRoom = NULL;
}

Sensor::~Sensor() {
    NOTIFY_DESTRUCTOR(~Sensor, true);
    cleanUpRelations();
}

Controller* Sensor::getItsController() const {
    return itsController;
}

void Sensor::setItsController(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_addItsSensor(this);
        }
    _setItsController(p_Controller);
}

Room* Sensor::getItsRoom() const {
    return itsRoom;
}

void Sensor::setItsRoom(Room* p_Room) {
    if(p_Room != NULL)
        {
            p_Room->_addItsSensor(this);
        }
    _setItsRoom(p_Room);
}

bool Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Sensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            Controller* current = itsController;
            if(current != NULL)
                {
                    current->_removeItsSensor(this);
                }
            itsController = NULL;
        }
    if(itsRoom != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoom");
            Room* current = itsRoom;
            if(current != NULL)
                {
                    current->_removeItsSensor(this);
                }
            itsRoom = NULL;
        }
}

void Sensor::__setItsController(Controller* p_Controller) {
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

void Sensor::_setItsController(Controller* p_Controller) {
    if(itsController != NULL)
        {
            itsController->_removeItsSensor(this);
        }
    __setItsController(p_Controller);
}

void Sensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Sensor::__setItsRoom(Room* p_Room) {
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

void Sensor::_setItsRoom(Room* p_Room) {
    if(itsRoom != NULL)
        {
            itsRoom->_removeItsSensor(this);
        }
    __setItsRoom(p_Room);
}

void Sensor::_clearItsRoom() {
    NOTIFY_RELATION_CLEARED("itsRoom");
    itsRoom = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensor::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_REACTIVE_META_SIMPLE_P(Sensor, SensorPkg, SensorPkg, false, OMAnimatedSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Sensor.cpp
*********************************************************************/
