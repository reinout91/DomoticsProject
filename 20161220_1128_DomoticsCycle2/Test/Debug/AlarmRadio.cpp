/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: AlarmRadio
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\AlarmRadio.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AlarmRadio.h"
//## link itsClock
#include "Clock.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "Room.h"
//#[ ignore
#define DevicePkg_AlarmRadio_setAlarm_SERIALIZE \
    aomsmethod->addAttribute("timeHour", x2String(timeHour));\
    aomsmethod->addAttribute("timeMinute", x2String(timeMinute));
#define DevicePkg_AlarmRadio_AlarmRadio_SERIALIZE OM_NO_OP

#define DevicePkg_AlarmRadio_isTime_SERIALIZE OM_NO_OP

#define DevicePkg_AlarmRadio_updateTime_SERIALIZE OM_NO_OP

#define OMAnim_DevicePkg_AlarmRadio_setAlarmHour_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alarmHour)

#define OMAnim_DevicePkg_AlarmRadio_setAlarmHour_int_SERIALIZE_RET_VAL

#define OMAnim_DevicePkg_AlarmRadio_setAlarmMinute_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alarmMinute)

#define OMAnim_DevicePkg_AlarmRadio_setAlarmMinute_int_SERIALIZE_RET_VAL
//#]

//## package DevicePkg

//## class AlarmRadio
AlarmRadio::AlarmRadio(IOxfActive* theActiveContext) : alarmHour(7), alarmMinute(0), alarmSounds(0), set(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AlarmRadio, AlarmRadio(), 0, DevicePkg_AlarmRadio_AlarmRadio_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsClock = NULL;
    itsClock_1 = NULL;
    initStatechart();
}

AlarmRadio::~AlarmRadio() {
    NOTIFY_DESTRUCTOR(~AlarmRadio, false);
    cleanUpRelations();
    cancelTimeouts();
}

bool AlarmRadio::isTime() {
    NOTIFY_OPERATION(isTime, isTime(), 0, DevicePkg_AlarmRadio_isTime_SERIALIZE);
    //#[ operation isTime()
    if ((alarmHour==hour) && (alarmMinute==minute)) {
    	return 1;
    }
    else {
    	return 0;
    }	 
    //#]
}

void AlarmRadio::setAlarm(int timeHour, int timeMinute) {
    NOTIFY_OPERATION(setAlarm, setAlarm(int,int), 2, DevicePkg_AlarmRadio_setAlarm_SERIALIZE);
    //#[ operation setAlarm(int,int)
    alarmHour=timeHour%24;
    alarmMinute=timeMinute%60;  
    
    
    //#]
}

void AlarmRadio::updateTime() {
    NOTIFY_OPERATION(updateTime, updateTime(), 0, DevicePkg_AlarmRadio_updateTime_SERIALIZE);
    //#[ operation updateTime()
    hour = itsClock -> getHour();
    minute = itsClock -> getMinute();
    second = itsClock -> getSecond();
    //#]
}

int AlarmRadio::getAlarmHour() const {
    return alarmHour;
}

void AlarmRadio::setAlarmHour(int p_alarmHour) {
    alarmHour = p_alarmHour;
    NOTIFY_SET_OPERATION;
}

int AlarmRadio::getAlarmMinute() const {
    return alarmMinute;
}

void AlarmRadio::setAlarmMinute(int p_alarmMinute) {
    alarmMinute = p_alarmMinute;
    NOTIFY_SET_OPERATION;
}

bool AlarmRadio::getAlarmSounds() const {
    return alarmSounds;
}

void AlarmRadio::setAlarmSounds(bool p_alarmSounds) {
    alarmSounds = p_alarmSounds;
    NOTIFY_SET_OPERATION;
}

int AlarmRadio::getHour() const {
    return hour;
}

void AlarmRadio::setHour(int p_hour) {
    hour = p_hour;
}

int AlarmRadio::getMinute() const {
    return minute;
}

void AlarmRadio::setMinute(int p_minute) {
    minute = p_minute;
}

int AlarmRadio::getSecond() const {
    return second;
}

void AlarmRadio::setSecond(int p_second) {
    second = p_second;
}

bool AlarmRadio::getSet() const {
    return set;
}

void AlarmRadio::setSet(bool p_set) {
    set = p_set;
    NOTIFY_SET_OPERATION;
}

Clock* AlarmRadio::getItsClock() const {
    return itsClock;
}

void AlarmRadio::setItsClock(Clock* p_Clock) {
    if(p_Clock != NULL)
        {
            p_Clock->_setItsAlarmRadio(this);
        }
    _setItsClock(p_Clock);
}

Clock* AlarmRadio::getItsClock_1() const {
    return itsClock_1;
}

void AlarmRadio::setItsClock_1(Clock* p_Clock) {
    itsClock_1 = p_Clock;
    if(p_Clock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsClock_1", p_Clock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsClock_1");
        }
}

bool AlarmRadio::startBehavior() {
    bool done = false;
    done = Radio::startBehavior();
    return done;
}

void AlarmRadio::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_8_subState = OMNonState;
    state_8_active = OMNonState;
    state_8_timeout = NULL;
    state_7_subState = OMNonState;
    state_7_active = OMNonState;
}

void AlarmRadio::cleanUpRelations() {
    if(itsClock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsClock");
            AlarmRadio* p_AlarmRadio = itsClock->getItsAlarmRadio();
            if(p_AlarmRadio != NULL)
                {
                    itsClock->__setItsAlarmRadio(NULL);
                }
            itsClock = NULL;
        }
    if(itsClock_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsClock_1");
            itsClock_1 = NULL;
        }
}

void AlarmRadio::cancelTimeouts() {
    cancel(state_8_timeout);
}

bool AlarmRadio::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_8_timeout == arg)
        {
            state_8_timeout = NULL;
            res = true;
        }
    return res;
}

void AlarmRadio::__setItsClock(Clock* p_Clock) {
    itsClock = p_Clock;
    if(p_Clock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsClock", p_Clock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsClock");
        }
}

void AlarmRadio::_setItsClock(Clock* p_Clock) {
    if(itsClock != NULL)
        {
            itsClock->__setItsAlarmRadio(NULL);
        }
    __setItsClock(p_Clock);
}

void AlarmRadio::_clearItsClock() {
    NOTIFY_RELATION_CLEARED("itsClock");
    itsClock = NULL;
}

void AlarmRadio::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        on_entDef();
    }
}

IOxfReactive::TakeEventStatus AlarmRadio::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State on
    if(rootState_active == on)
        {
            res = on_processEvent();
        }
    return res;
}

void AlarmRadio::on_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.on");
    rootState_subState = on;
    rootState_active = on;
    state_7_entDef();
    state_8_entDef();
}

void AlarmRadio::on_exit() {
    switch (state_7_subState) {
        // State active
        case active:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.on.state_7.active");
        }
        break;
        // State alarm
        case alarm:
        {
            NOTIFY_STATE_EXITED("ROOT.on.state_7.alarm");
        }
        break;
        // State idle
        case idle:
        {
            NOTIFY_STATE_EXITED("ROOT.on.state_7.idle");
        }
        break;
        default:
            break;
    }
    state_7_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.on.state_7");
    state_8_exit();
    
    NOTIFY_STATE_EXITED("ROOT.on");
}

IOxfReactive::TakeEventStatus AlarmRadio::on_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_7
    if(state_7_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(on))
                {
                    return res;
                }
        }
    // State state_8
    if(state_8_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(on))
                {
                    return res;
                }
        }
    
    return res;
}

void AlarmRadio::state_8_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.on.state_8");
    NOTIFY_TRANSITION_STARTED("4");
    //#[ transition 4 
    updateTime();
    //#]
    NOTIFY_STATE_ENTERED("ROOT.on.state_8.timeRunning");
    state_8_subState = timeRunning;
    state_8_active = timeRunning;
    state_8_timeout = scheduleTimeout(1000, "ROOT.on.state_8.timeRunning");
    NOTIFY_TRANSITION_TERMINATED("4");
}

void AlarmRadio::state_8_exit() {
    // State timeRunning
    if(state_8_subState == timeRunning)
        {
            cancel(state_8_timeout);
            NOTIFY_STATE_EXITED("ROOT.on.state_8.timeRunning");
        }
    state_8_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.on.state_8");
}

IOxfReactive::TakeEventStatus AlarmRadio::state_8_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State timeRunning
    if(state_8_active == timeRunning)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_8_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(state_8_timeout);
                            NOTIFY_STATE_EXITED("ROOT.on.state_8.timeRunning");
                            //#[ transition 5 
                            updateTime();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.on.state_8.timeRunning");
                            state_8_subState = timeRunning;
                            state_8_active = timeRunning;
                            state_8_timeout = scheduleTimeout(1000, "ROOT.on.state_8.timeRunning");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void AlarmRadio::state_7_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.on.state_7");
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.on.state_7.idle");
    state_7_subState = idle;
    state_7_active = idle;
    NOTIFY_TRANSITION_TERMINATED("0");
}

IOxfReactive::TakeEventStatus AlarmRadio::state_7_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_7_active) {
        // State active
        case active:
        {
            if(IS_EVENT_TYPE_OF(evResetAlarm_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.on.state_7.active");
                    //#[ transition 6 
                    setSet(0);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on.state_7.idle");
                    state_7_subState = idle;
                    state_7_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 2 
                    if(isTime())
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.on.state_7.active");
                            //#[ transition 2 
                            setAlarmSounds(1);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.on.state_7.alarm");
                            state_7_subState = alarm;
                            state_7_active = alarm;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State alarm
        case alarm:
        {
            if(IS_EVENT_TYPE_OF(evResetAlarm_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.on.state_7.alarm");
                    //#[ transition 3 
                    setAlarmSounds(0);setSet(0);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on.state_7.idle");
                    state_7_subState = idle;
                    state_7_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(evSetAlarm_DevicePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.on.state_7.idle");
                    //#[ transition 1 
                    setSet(1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.on.state_7.active");
                    pushNullTransition();
                    state_7_subState = active;
                    state_7_active = active;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAlarmRadio::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("hour", x2String(myReal->hour));
    aomsAttributes->addAttribute("minute", x2String(myReal->minute));
    aomsAttributes->addAttribute("second", x2String(myReal->second));
    aomsAttributes->addAttribute("alarmHour", x2String(myReal->alarmHour));
    aomsAttributes->addAttribute("alarmMinute", x2String(myReal->alarmMinute));
    aomsAttributes->addAttribute("alarmSounds", x2String(myReal->alarmSounds));
    aomsAttributes->addAttribute("set", x2String(myReal->set));
    OMAnimatedRadio::serializeAttributes(aomsAttributes);
}

void OMAnimatedAlarmRadio::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsClock", false, true);
    if(myReal->itsClock)
        {
            aomsRelations->ADD_ITEM(myReal->itsClock);
        }
    aomsRelations->addRelation("itsClock_1", false, true);
    if(myReal->itsClock_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsClock_1);
        }
    OMAnimatedRadio::serializeRelations(aomsRelations);
}

void OMAnimatedAlarmRadio::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == AlarmRadio::on)
        {
            on_serializeStates(aomsState);
        }
}

void OMAnimatedAlarmRadio::on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on");
    state_7_serializeStates(aomsState);
    state_8_serializeStates(aomsState);
}

void OMAnimatedAlarmRadio::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.state_8");
    if(myReal->state_8_subState == AlarmRadio::timeRunning)
        {
            timeRunning_serializeStates(aomsState);
        }
}

void OMAnimatedAlarmRadio::timeRunning_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.state_8.timeRunning");
}

void OMAnimatedAlarmRadio::state_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.state_7");
    switch (myReal->state_7_subState) {
        case AlarmRadio::active:
        {
            active_serializeStates(aomsState);
        }
        break;
        case AlarmRadio::alarm:
        {
            alarm_serializeStates(aomsState);
        }
        break;
        case AlarmRadio::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAlarmRadio::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.state_7.idle");
}

void OMAnimatedAlarmRadio::alarm_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.state_7.alarm");
}

void OMAnimatedAlarmRadio::active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.on.state_7.active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(AlarmRadio, DevicePkg, false, Radio, OMAnimatedRadio, OMAnimatedAlarmRadio)

OMINIT_SUPERCLASS(Radio, OMAnimatedRadio)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedAlarmRadio, DevicePkg_AlarmRadio_setAlarmHour_int, "setAlarmHour", FALSE, "setAlarmHour(int)", 1)

IMPLEMENT_OP_CALL(DevicePkg_AlarmRadio_setAlarmHour_int, AlarmRadio, setAlarmHour(p_alarmHour), NO_OP())

IMPLEMENT_META_OP(OMAnimatedAlarmRadio, DevicePkg_AlarmRadio_setAlarmMinute_int, "setAlarmMinute", FALSE, "setAlarmMinute(int)", 1)

IMPLEMENT_OP_CALL(DevicePkg_AlarmRadio_setAlarmMinute_int, AlarmRadio, setAlarmMinute(p_alarmMinute), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\AlarmRadio.cpp
*********************************************************************/
