/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: MovementSensor
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\MovementSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MovementSensor.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//## link itsToilet
#include "Toilet.h"
//#[ ignore
#define SensorPkg_MovementSensor_MovementSensor_SERIALIZE OM_NO_OP
//#]

//## package SensorPkg

//## class MovementSensor
MovementSensor::MovementSensor(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MovementSensor, MovementSensor(), 0, SensorPkg_MovementSensor_MovementSensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsToilet = NULL;
    initStatechart();
}

MovementSensor::~MovementSensor() {
    NOTIFY_DESTRUCTOR(~MovementSensor, false);
    cleanUpRelations();
}

bool MovementSensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void MovementSensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    
}

Toilet* MovementSensor::getItsToilet() const {
    return itsToilet;
}

void MovementSensor::setItsToilet(Toilet* p_Toilet) {
    if(p_Toilet != NULL)
        {
            p_Toilet->_setItsMovementSensor(this);
        }
    _setItsToilet(p_Toilet);
}

void MovementSensor::cleanUpRelations() {
    if(itsToilet != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsToilet");
            MovementSensor* p_MovementSensor = itsToilet->getItsMovementSensor();
            if(p_MovementSensor != NULL)
                {
                    itsToilet->__setItsMovementSensor(NULL);
                }
            itsToilet = NULL;
        }
}

void MovementSensor::__setItsToilet(Toilet* p_Toilet) {
    itsToilet = p_Toilet;
    if(p_Toilet != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsToilet", p_Toilet, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsToilet");
        }
}

void MovementSensor::_setItsToilet(Toilet* p_Toilet) {
    if(itsToilet != NULL)
        {
            itsToilet->__setItsMovementSensor(NULL);
        }
    __setItsToilet(p_Toilet);
}

void MovementSensor::_clearItsToilet() {
    NOTIFY_RELATION_CLEARED("itsToilet");
    itsToilet = NULL;
}

void MovementSensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus MovementSensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State idle
    if(rootState_active == idle)
        {
            if(IS_EVENT_TYPE_OF(evSensorMovement_SensorPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    itsRoom -> GEN(evRoomMovement);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMovementSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedMovementSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsToilet", false, true);
    if(myReal->itsToilet)
        {
            aomsRelations->ADD_ITEM(myReal->itsToilet);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedMovementSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == MovementSensor::idle)
        {
            idle_serializeStates(aomsState);
        }
}

void OMAnimatedMovementSensor::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(MovementSensor, SensorPkg, false, Sensor, OMAnimatedSensor, OMAnimatedMovementSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\MovementSensor.cpp
*********************************************************************/
