/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Room
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Room.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Room.h"
//## link itsDevice
#include "Device.h"
//## link itsSensor
#include "Sensor.h"
//#[ ignore
#define SpacePkg_Room_Room_SERIALIZE OM_NO_OP

#define SpacePkg_Room_getTimeOutDuration_SERIALIZE OM_NO_OP

#define SpacePkg_Room_isTimedOut_SERIALIZE OM_NO_OP

#define SpacePkg_Room_newMovementAction_SERIALIZE OM_NO_OP

#define SpacePkg_Room_resetCountDown_SERIALIZE OM_NO_OP

#define SpacePkg_Room_timeOutAction_SERIALIZE OM_NO_OP
//#]

//## package SpacePkg

//## class Room
Room::Room(IOxfActive* theActiveContext) : secondsSinceMovement(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Room, Room(), 0, SpacePkg_Room_Room_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Room::~Room() {
    NOTIFY_DESTRUCTOR(~Room, true);
    cleanUpRelations();
    cancelTimeouts();
}

int Room::getTimeOutDuration() {
    NOTIFY_OPERATION(getTimeOutDuration, getTimeOutDuration(), 0, SpacePkg_Room_getTimeOutDuration_SERIALIZE);
    //#[ operation getTimeOutDuration()
    return 0;
    //#]
}

bool Room::isTimedOut() {
    NOTIFY_OPERATION(isTimedOut, isTimedOut(), 0, SpacePkg_Room_isTimedOut_SERIALIZE);
    //#[ operation isTimedOut()
    return (0 == secondsSinceMovement);
    //#]
}

void Room::newMovementAction() {
    NOTIFY_OPERATION(newMovementAction, newMovementAction(), 0, SpacePkg_Room_newMovementAction_SERIALIZE);
    //#[ operation newMovementAction()
    //#]
}

void Room::resetCountDown() {
    NOTIFY_OPERATION(resetCountDown, resetCountDown(), 0, SpacePkg_Room_resetCountDown_SERIALIZE);
    //#[ operation resetCountDown()
    secondsSinceMovement = getTimeOutDuration();
    //#]
}

void Room::timeOutAction() {
    NOTIFY_OPERATION(timeOutAction, timeOutAction(), 0, SpacePkg_Room_timeOutAction_SERIALIZE);
    //#[ operation timeOutAction()
    //#]
}

int Room::getSecondsSinceMovement() const {
    return secondsSinceMovement;
}

void Room::setSecondsSinceMovement(int p_secondsSinceMovement) {
    secondsSinceMovement = p_secondsSinceMovement;
}

OMIterator<Device*> Room::getItsDevice() const {
    OMIterator<Device*> iter(itsDevice);
    return iter;
}

void Room::addItsDevice(Device* p_Device) {
    if(p_Device != NULL)
        {
            p_Device->_setItsRoom(this);
        }
    _addItsDevice(p_Device);
}

void Room::removeItsDevice(Device* p_Device) {
    if(p_Device != NULL)
        {
            p_Device->__setItsRoom(NULL);
        }
    _removeItsDevice(p_Device);
}

void Room::clearItsDevice() {
    OMIterator<Device*> iter(itsDevice);
    while (*iter){
        (*iter)->_clearItsRoom();
        iter++;
    }
    _clearItsDevice();
}

OMIterator<Sensor*> Room::getItsSensor() const {
    OMIterator<Sensor*> iter(itsSensor);
    return iter;
}

void Room::addItsSensor(Sensor* p_Sensor) {
    if(p_Sensor != NULL)
        {
            p_Sensor->_setItsRoom(this);
        }
    _addItsSensor(p_Sensor);
}

void Room::removeItsSensor(Sensor* p_Sensor) {
    if(p_Sensor != NULL)
        {
            p_Sensor->__setItsRoom(NULL);
        }
    _removeItsSensor(p_Sensor);
}

void Room::clearItsSensor() {
    OMIterator<Sensor*> iter(itsSensor);
    while (*iter){
        (*iter)->_clearItsRoom();
        iter++;
    }
    _clearItsSensor();
}

bool Room::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Room::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Room::cleanUpRelations() {
    {
        OMIterator<Device*> iter(itsDevice);
        while (*iter){
            Room* p_Room = (*iter)->getItsRoom();
            if(p_Room != NULL)
                {
                    (*iter)->__setItsRoom(NULL);
                }
            iter++;
        }
        itsDevice.removeAll();
    }
    {
        OMIterator<Sensor*> iter(itsSensor);
        while (*iter){
            Room* p_Room = (*iter)->getItsRoom();
            if(p_Room != NULL)
                {
                    (*iter)->__setItsRoom(NULL);
                }
            iter++;
        }
        itsSensor.removeAll();
    }
}

void Room::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Room::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Room::_addItsDevice(Device* p_Device) {
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

void Room::_removeItsDevice(Device* p_Device) {
    NOTIFY_RELATION_ITEM_REMOVED("itsDevice", p_Device);
    itsDevice.remove(p_Device);
}

void Room::_clearItsDevice() {
    NOTIFY_RELATION_CLEARED("itsDevice");
    itsDevice.removeAll();
}

void Room::_addItsSensor(Sensor* p_Sensor) {
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

void Room::_removeItsSensor(Sensor* p_Sensor) {
    NOTIFY_RELATION_ITEM_REMOVED("itsSensor", p_Sensor);
    itsSensor.remove(p_Sensor);
}

void Room::_clearItsSensor() {
    NOTIFY_RELATION_CLEARED("itsSensor");
    itsSensor.removeAll();
}

void Room::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.timedOut");
        rootState_subState = timedOut;
        rootState_active = timedOut;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Room::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State countingDown
        case countingDown:
        {
            res = countingDown_handleEvent();
        }
        break;
        // State timedOut
        case timedOut:
        {
            if(IS_EVENT_TYPE_OF(evRoomMovement_SpacePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.timedOut");
                    //#[ transition 4 
                    newMovementAction();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.countingDown");
                    pushNullTransition();
                    rootState_subState = countingDown;
                    rootState_active = countingDown;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.countingDown");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Room::countingDown_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.countingDown");
                    //#[ transition 2 
                    --secondsSinceMovement;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.countingDown");
                    pushNullTransition();
                    rootState_subState = countingDown;
                    rootState_active = countingDown;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.countingDown");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 3 
            if(isTimedOut())
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.countingDown");
                    //#[ transition 3 
                    timeOutAction();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.timedOut");
                    rootState_subState = timedOut;
                    rootState_active = timedOut;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evRoomMovement_SpacePkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            popNullTransition();
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.countingDown");
            //#[ transition 1 
            resetCountDown();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.countingDown");
            pushNullTransition();
            rootState_subState = countingDown;
            rootState_active = countingDown;
            rootState_timeout = scheduleTimeout(1000, "ROOT.countingDown");
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRoom::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("secondsSinceMovement", x2String(myReal->secondsSinceMovement));
}

void OMAnimatedRoom::serializeRelations(AOMSRelations* aomsRelations) const {
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
}

void OMAnimatedRoom::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Room::countingDown:
        {
            countingDown_serializeStates(aomsState);
        }
        break;
        case Room::timedOut:
        {
            timedOut_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedRoom::timedOut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.timedOut");
}

void OMAnimatedRoom::countingDown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.countingDown");
}
//#]

IMPLEMENT_REACTIVE_META_P(Room, SpacePkg, SpacePkg, false, OMAnimatedRoom)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Room.cpp
*********************************************************************/
