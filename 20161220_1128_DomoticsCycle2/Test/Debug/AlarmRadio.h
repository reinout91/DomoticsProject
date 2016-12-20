/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: AlarmRadio
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\AlarmRadio.h
*********************************************************************/

#ifndef AlarmRadio_H
#define AlarmRadio_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## class AlarmRadio
#include "Radio.h"
//## link itsClock
class Clock;

//## auto_generated
class Controller;

//## auto_generated
class Room;

//#[ ignore
#define OMAnim_DevicePkg_AlarmRadio_setAlarmHour_int_ARGS_DECLARATION int p_alarmHour;

#define OMAnim_DevicePkg_AlarmRadio_setAlarmMinute_int_ARGS_DECLARATION int p_alarmMinute;
//#]

//## package DevicePkg

//## class AlarmRadio
class AlarmRadio : public Radio {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlarmRadio;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AlarmRadio(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~AlarmRadio();
    
    ////    Operations    ////
    
    //## operation isTime()
    bool isTime();
    
    //## operation setAlarm(int,int)
    void setAlarm(int timeHour, int timeMinute);
    
    //## operation updateTime()
    void updateTime();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAlarmHour() const;
    
    //## auto_generated
    void setAlarmHour(int p_alarmHour);
    
    //## auto_generated
    int getAlarmMinute() const;
    
    //## auto_generated
    void setAlarmMinute(int p_alarmMinute);
    
    //## auto_generated
    bool getAlarmSounds() const;
    
    //## auto_generated
    void setAlarmSounds(bool p_alarmSounds);
    
    //## auto_generated
    int getHour() const;
    
    //## auto_generated
    void setHour(int p_hour);
    
    //## auto_generated
    int getMinute() const;
    
    //## auto_generated
    void setMinute(int p_minute);
    
    //## auto_generated
    int getSecond() const;
    
    //## auto_generated
    void setSecond(int p_second);
    
    //## auto_generated
    bool getSet() const;
    
    //## auto_generated
    void setSet(bool p_set);
    
    //## auto_generated
    Clock* getItsClock() const;
    
    //## auto_generated
    void setItsClock(Clock* p_Clock);
    
    //## auto_generated
    Clock* getItsClock_1() const;
    
    //## auto_generated
    void setItsClock_1(Clock* p_Clock);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int alarmHour;		//## attribute alarmHour
    
    int alarmMinute;		//## attribute alarmMinute
    
    bool alarmSounds;		//## attribute alarmSounds
    
    int hour;		//## attribute hour
    
    int minute;		//## attribute minute
    
    int second;		//## attribute second
    
    bool set;		//## attribute set
    
    ////    Relations and components    ////
    
    Clock* itsClock;		//## link itsClock
    
    Clock* itsClock_1;		//## link itsClock_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsClock(Clock* p_Clock);
    
    //## auto_generated
    void _setItsClock(Clock* p_Clock);
    
    //## auto_generated
    void _clearItsClock();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // on:
    //## statechart_method
    inline bool on_IN() const;
    
    //## statechart_method
    void on_entDef();
    
    //## statechart_method
    void on_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus on_processEvent();
    
    // state_8:
    //## statechart_method
    inline bool state_8_IN() const;
    
    //## statechart_method
    void state_8_entDef();
    
    //## statechart_method
    void state_8_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_8_processEvent();
    
    // timeRunning:
    //## statechart_method
    inline bool timeRunning_IN() const;
    
    // state_7:
    //## statechart_method
    inline bool state_7_IN() const;
    
    //## statechart_method
    void state_7_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    // alarm:
    //## statechart_method
    inline bool alarm_IN() const;
    
    // active:
    //## statechart_method
    inline bool active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum AlarmRadio_Enum {
        OMNonState = 0,
        on = 1,
        state_8 = 2,
        timeRunning = 3,
        state_7 = 4,
        idle = 5,
        alarm = 6,
        active = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_8_subState;
    
    int state_8_active;
    
    IOxfTimeout* state_8_timeout;
    
    int state_7_subState;
    
    int state_7_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(DevicePkg_AlarmRadio_setAlarmHour_int)

DECLARE_OPERATION_CLASS(DevicePkg_AlarmRadio_setAlarmMinute_int)

//#[ ignore
class OMAnimatedAlarmRadio : public OMAnimatedRadio {
    DECLARE_REACTIVE_META(AlarmRadio, OMAnimatedAlarmRadio)
    
    DECLARE_META_OP(DevicePkg_AlarmRadio_setAlarmHour_int)
    
    DECLARE_META_OP(DevicePkg_AlarmRadio_setAlarmMinute_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void timeRunning_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void alarm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void active_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool AlarmRadio::rootState_IN() const {
    return true;
}

inline bool AlarmRadio::on_IN() const {
    return rootState_subState == on;
}

inline bool AlarmRadio::state_8_IN() const {
    return on_IN();
}

inline bool AlarmRadio::timeRunning_IN() const {
    return state_8_subState == timeRunning;
}

inline bool AlarmRadio::state_7_IN() const {
    return on_IN();
}

inline bool AlarmRadio::idle_IN() const {
    return state_7_subState == idle;
}

inline bool AlarmRadio::alarm_IN() const {
    return state_7_subState == alarm;
}

inline bool AlarmRadio::active_IN() const {
    return state_7_subState == active;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\AlarmRadio.h
*********************************************************************/
