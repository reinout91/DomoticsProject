/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Television
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Television.h
*********************************************************************/

#ifndef Television_H
#define Television_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class Television
#include "RtvDevice.h"
//## auto_generated
class Room;

//## auto_generated
class Controller;

//## package DevicePkg

//## class Television
class Television : public RtvDevice {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTelevision;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Television()
    Television(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Television();
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController_1() const;
    
    //## auto_generated
    void setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    ////    Relations and components    ////
    
    Controller* itsController_1;		//## link itsController_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController_1(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController_1();
    
    ////    Framework    ////
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;

protected :

//#[ ignore
    enum Television_Enum {
        OMNonState = 0,
        idle = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTelevision : public OMAnimatedRtvDevice {
    DECLARE_REACTIVE_META(Television, OMAnimatedTelevision)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Television::rootState_IN() const {
    return true;
}

inline bool Television::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\Television.h
*********************************************************************/
