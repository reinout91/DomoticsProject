/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: SpacePkg
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\SpacePkg.h
*********************************************************************/

#ifndef SpacePkg_H
#define SpacePkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Bedroom;

//## auto_generated
class Kitchen;

//## auto_generated
class LivingRoom;

//## auto_generated
class Room;

//## auto_generated
class Toilet;

//#[ ignore
#define evRoomMovement_SpacePkg_id 2401
//#]

//## package SpacePkg



//## event evRoomMovement()
class evRoomMovement : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRoomMovement;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRoomMovement();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRoomMovement : virtual public AOMEvent {
    DECLARE_META_EVENT(evRoomMovement)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\SpacePkg.h
*********************************************************************/
