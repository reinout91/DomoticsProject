/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Radio
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Radio.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Radio.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_Radio_Radio_SERIALIZE OM_NO_OP
//#]

//## package DevicePkg

//## class Radio
Radio::Radio(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Radio, Radio(), 0, DevicePkg_Radio_Radio_SERIALIZE);
    setActiveContext(theActiveContext, false);
    //#[ operation Radio()
    settings[0] = volume;
    settings[1] = channel;
    //#]
}

Radio::~Radio() {
    NOTIFY_DESTRUCTOR(~Radio, false);
}

bool Radio::startBehavior() {
    bool done = false;
    done = RtvDevice::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRadio::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRtvDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedRadio::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedRtvDevice::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(Radio, DevicePkg, false, RtvDevice, OMAnimatedRtvDevice, OMAnimatedRadio)

OMINIT_SUPERCLASS(RtvDevice, OMAnimatedRtvDevice)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Radio.cpp
*********************************************************************/
