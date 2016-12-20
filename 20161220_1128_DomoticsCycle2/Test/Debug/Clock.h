/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Clock
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Clock.h
*********************************************************************/

#ifndef Clock_H
#define Clock_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "DevicePkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsAlarmRadio
class AlarmRadio;

//## package DevicePkg

//## class Clock
class Clock : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedClock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Clock(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Clock();
    
    ////    Operations    ////
    
    //## operation calculateTime()
    void calculateTime();
    
    //## operation getTime()
    int getTime();
    
    //## operation setTime(int)
    void setTime(int value);
    
    ////    Additional operations    ////
    
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
    AlarmRadio* getItsAlarmRadio() const;
    
    //## auto_generated
    void setItsAlarmRadio(AlarmRadio* p_AlarmRadio);
    
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
    
    int hour;		//## attribute hour
    
    int minute;		//## attribute minute
    
    int second;		//## attribute second
    
    int time;		//## attribute time
    
    ////    Relations and components    ////
    
    AlarmRadio* itsAlarmRadio;		//## link itsAlarmRadio
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAlarmRadio(AlarmRadio* p_AlarmRadio);
    
    //## auto_generated
    void _setItsAlarmRadio(AlarmRadio* p_AlarmRadio);
    
    //## auto_generated
    void _clearItsAlarmRadio();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // running:
    //## statechart_method
    inline bool running_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Clock_Enum {
        OMNonState = 0,
        running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedClock : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Clock, OMAnimatedClock)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void running_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Clock::rootState_IN() const {
    return true;
}

inline bool Clock::running_IN() const {
    return rootState_subState == running;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\Clock.h
*********************************************************************/
