/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Television
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Television.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Television.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_Television_Television_SERIALIZE OM_NO_OP
//#]

//## package DevicePkg

//## class Television
Television::Television(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Television, Television(), 0, DevicePkg_Television_Television_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController_1 = NULL;
    initStatechart();
    //#[ operation Television()
    settings[0] = volume;
    settings[1] = channel; 
    
    for (int i=0; i<=11; i++) {
    	channelOrder[i]=i;
    } 
            
    
       
    //#]
}

Television::~Television() {
    NOTIFY_DESTRUCTOR(~Television, false);
    cleanUpRelations();
}

Controller* Television::getItsController_1() const {
    return itsController_1;
}

void Television::setItsController_1(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_setItsTelevision(this);
        }
    _setItsController_1(p_Controller);
}

bool Television::startBehavior() {
    bool done = false;
    done = RtvDevice::startBehavior();
    return done;
}

void Television::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Television::cleanUpRelations() {
    if(itsController_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_1");
            Television* p_Television = itsController_1->getItsTelevision();
            if(p_Television != NULL)
                {
                    itsController_1->__setItsTelevision(NULL);
                }
            itsController_1 = NULL;
        }
}

void Television::__setItsController_1(Controller* p_Controller) {
    itsController_1 = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController_1", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController_1");
        }
}

void Television::_setItsController_1(Controller* p_Controller) {
    if(itsController_1 != NULL)
        {
            itsController_1->__setItsTelevision(NULL);
        }
    __setItsController_1(p_Controller);
}

void Television::_clearItsController_1() {
    NOTIFY_RELATION_CLEARED("itsController_1");
    itsController_1 = NULL;
}

void Television::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Television::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State idle
    if(rootState_active == idle)
        {
            if(IS_EVENT_TYPE_OF(evChannelSwitch_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    switchChannels(switchChannelOne,switchChannelTwo);
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
void OMAnimatedTelevision::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRtvDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedTelevision::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_1", false, true);
    if(myReal->itsController_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_1);
        }
    OMAnimatedRtvDevice::serializeRelations(aomsRelations);
}

void OMAnimatedTelevision::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Television::idle)
        {
            idle_serializeStates(aomsState);
        }
}

void OMAnimatedTelevision::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Television, DevicePkg, false, RtvDevice, OMAnimatedRtvDevice, OMAnimatedTelevision)

OMINIT_SUPERCLASS(RtvDevice, OMAnimatedRtvDevice)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Television.cpp
*********************************************************************/
