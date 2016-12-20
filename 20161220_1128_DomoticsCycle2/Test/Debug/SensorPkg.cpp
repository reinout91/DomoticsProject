/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: SensorPkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\SensorPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorPkg.h"
//## auto_generated
#include "Sensor.h"
//## auto_generated
#include "MovementSensor.h"
//#[ ignore
#define evSensorMovement_SERIALIZE OM_NO_OP

#define evSensorMovement_UNSERIALIZE OM_NO_OP

#define evSensorMovement_CONSTRUCTOR evSensorMovement()

#define evResetSensor_SERIALIZE OM_NO_OP

#define evResetSensor_UNSERIALIZE OM_NO_OP

#define evResetSensor_CONSTRUCTOR evResetSensor()
//#]

//## package SensorPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SensorPkg, SensorPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evSensorMovement()
evSensorMovement::evSensorMovement() {
    NOTIFY_EVENT_CONSTRUCTOR(evSensorMovement)
    setId(evSensorMovement_SensorPkg_id);
}

bool evSensorMovement::isTypeOf(const short id) const {
    return (evSensorMovement_SensorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSensorMovement, SensorPkg, SensorPkg, evSensorMovement())

//## event evResetSensor()
evResetSensor::evResetSensor() {
    NOTIFY_EVENT_CONSTRUCTOR(evResetSensor)
    setId(evResetSensor_SensorPkg_id);
}

bool evResetSensor::isTypeOf(const short id) const {
    return (evResetSensor_SensorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evResetSensor, SensorPkg, SensorPkg, evResetSensor())

/*********************************************************************
	File Path	: Test\Debug\SensorPkg.cpp
*********************************************************************/
