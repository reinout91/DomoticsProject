/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: SpacePkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\SpacePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SpacePkg.h"
//## auto_generated
#include "Bedroom.h"
//## auto_generated
#include "Kitchen.h"
//## auto_generated
#include "LivingRoom.h"
//## auto_generated
#include "Room.h"
//## auto_generated
#include "Toilet.h"
//#[ ignore
#define evRoomMovement_SERIALIZE OM_NO_OP

#define evRoomMovement_UNSERIALIZE OM_NO_OP

#define evRoomMovement_CONSTRUCTOR evRoomMovement()
//#]

//## package SpacePkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SpacePkg, SpacePkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evRoomMovement()
evRoomMovement::evRoomMovement() {
    NOTIFY_EVENT_CONSTRUCTOR(evRoomMovement)
    setId(evRoomMovement_SpacePkg_id);
}

bool evRoomMovement::isTypeOf(const short id) const {
    return (evRoomMovement_SpacePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evRoomMovement, SpacePkg, SpacePkg, evRoomMovement())

/*********************************************************************
	File Path	: Test\Debug\SpacePkg.cpp
*********************************************************************/
