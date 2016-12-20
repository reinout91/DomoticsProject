/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Radio
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Radio.h
*********************************************************************/

#ifndef Radio_H
#define Radio_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class Radio
#include "RtvDevice.h"
//## auto_generated
class Controller;

//## auto_generated
class Room;

//## package DevicePkg

//## class Radio
class Radio : public RtvDevice {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRadio;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Radio()
    Radio(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Radio();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Framework operations    ////
    
    ////    Framework    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRadio : public OMAnimatedRtvDevice {
    DECLARE_META(Radio, OMAnimatedRadio)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Radio.h
*********************************************************************/
