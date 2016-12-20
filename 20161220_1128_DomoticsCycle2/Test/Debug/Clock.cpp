/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Clock
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Clock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Clock.h"
//## link itsAlarmRadio
#include "AlarmRadio.h"
//#[ ignore
#define DevicePkg_Clock_Clock_SERIALIZE OM_NO_OP

#define DevicePkg_Clock_calculateTime_SERIALIZE OM_NO_OP

#define DevicePkg_Clock_getTime_SERIALIZE OM_NO_OP

#define DevicePkg_Clock_setTime_SERIALIZE aomsmethod->addAttribute("value", x2String(value));
//#]

//## package DevicePkg

//## class Clock
Clock::Clock(IOxfActive* theActiveContext) : hour(8), minute(0), second(0), time(28800) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Clock, Clock(), 0, DevicePkg_Clock_Clock_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsAlarmRadio = NULL;
    initStatechart();
}

Clock::~Clock() {
    NOTIFY_DESTRUCTOR(~Clock, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Clock::calculateTime() {
    NOTIFY_OPERATION(calculateTime, calculateTime(), 0, DevicePkg_Clock_calculateTime_SERIALIZE);
    //#[ operation calculateTime()
    hour=(time/3600)%24;   
    minute=(time/60)%60; 
    second=time%60;
    
    //#]
}

int Clock::getTime() {
    NOTIFY_OPERATION(getTime, getTime(), 0, DevicePkg_Clock_getTime_SERIALIZE);
    //#[ operation getTime()
    return time;
    //#]
}

void Clock::setTime(int value) {
    NOTIFY_OPERATION(setTime, setTime(int), 1, DevicePkg_Clock_setTime_SERIALIZE);
    //#[ operation setTime(int)
    time=value;
    //#]
}

int Clock::getHour() const {
    return hour;
}

void Clock::setHour(int p_hour) {
    hour = p_hour;
    NOTIFY_SET_OPERATION;
}

int Clock::getMinute() const {
    return minute;
}

void Clock::setMinute(int p_minute) {
    minute = p_minute;
    NOTIFY_SET_OPERATION;
}

int Clock::getSecond() const {
    return second;
}

void Clock::setSecond(int p_second) {
    second = p_second;
    NOTIFY_SET_OPERATION;
}

AlarmRadio* Clock::getItsAlarmRadio() const {
    return itsAlarmRadio;
}

void Clock::setItsAlarmRadio(AlarmRadio* p_AlarmRadio) {
    if(p_AlarmRadio != NULL)
        {
            p_AlarmRadio->_setItsClock(this);
        }
    _setItsAlarmRadio(p_AlarmRadio);
}

bool Clock::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Clock::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Clock::cleanUpRelations() {
    if(itsAlarmRadio != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlarmRadio");
            Clock* p_Clock = itsAlarmRadio->getItsClock();
            if(p_Clock != NULL)
                {
                    itsAlarmRadio->__setItsClock(NULL);
                }
            itsAlarmRadio = NULL;
        }
}

void Clock::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Clock::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Clock::__setItsAlarmRadio(AlarmRadio* p_AlarmRadio) {
    itsAlarmRadio = p_AlarmRadio;
    if(p_AlarmRadio != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlarmRadio", p_AlarmRadio, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlarmRadio");
        }
}

void Clock::_setItsAlarmRadio(AlarmRadio* p_AlarmRadio) {
    if(itsAlarmRadio != NULL)
        {
            itsAlarmRadio->__setItsClock(NULL);
        }
    __setItsAlarmRadio(p_AlarmRadio);
}

void Clock::_clearItsAlarmRadio() {
    NOTIFY_RELATION_CLEARED("itsAlarmRadio");
    itsAlarmRadio = NULL;
}

void Clock::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.running");
        rootState_subState = running;
        rootState_active = running;
        rootState_timeout = scheduleTimeout(1000, "ROOT.running");
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus Clock::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State running
    if(rootState_active == running)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.running");
                            //#[ transition 0 
                            ++time; calculateTime();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.running");
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(1000, "ROOT.running");
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedClock::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("hour", x2String(myReal->hour));
    aomsAttributes->addAttribute("minute", x2String(myReal->minute));
    aomsAttributes->addAttribute("second", x2String(myReal->second));
}

void OMAnimatedClock::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAlarmRadio", false, true);
    if(myReal->itsAlarmRadio)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlarmRadio);
        }
}

void OMAnimatedClock::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Clock::running)
        {
            running_serializeStates(aomsState);
        }
}

void OMAnimatedClock::running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.running");
}
//#]

IMPLEMENT_REACTIVE_META_P(Clock, DevicePkg, DevicePkg, false, OMAnimatedClock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Clock.cpp
*********************************************************************/
