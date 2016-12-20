/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Room
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Room.h
*********************************************************************/

#ifndef Room_H
#define Room_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SpacePkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <oxf\omcollec.h>
//## link itsDevice
class Device;

//## link itsSensor
class Sensor;

//## package SpacePkg

//## class Room
class Room : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRoom;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Room(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Room();
    
    ////    Operations    ////
    
    //## operation getTimeOutDuration()
    virtual int getTimeOutDuration();
    
    //## operation isTimedOut()
    bool isTimedOut();
    
    //## operation newMovementAction()
    virtual void newMovementAction();
    
    //## operation resetCountDown()
    void resetCountDown();
    
    //## operation timeOutAction()
    virtual void timeOutAction();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getSecondsSinceMovement() const;
    
    //## auto_generated
    void setSecondsSinceMovement(int p_secondsSinceMovement);
    
    //## auto_generated
    OMIterator<Device*> getItsDevice() const;
    
    //## auto_generated
    void addItsDevice(Device* p_Device);
    
    //## auto_generated
    void removeItsDevice(Device* p_Device);
    
    //## auto_generated
    void clearItsDevice();
    
    //## auto_generated
    OMIterator<Sensor*> getItsSensor() const;
    
    //## auto_generated
    void addItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void removeItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void clearItsSensor();
    
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
    
    int secondsSinceMovement;		//## attribute secondsSinceMovement
    
    ////    Relations and components    ////
    
    OMCollection<Device*> itsDevice;		//## link itsDevice
    
    OMCollection<Sensor*> itsSensor;		//## link itsSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsDevice(Device* p_Device);
    
    //## auto_generated
    void _removeItsDevice(Device* p_Device);
    
    //## auto_generated
    void _clearItsDevice();
    
    //## auto_generated
    void _addItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void _removeItsSensor(Sensor* p_Sensor);
    
    //## auto_generated
    void _clearItsSensor();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // timedOut:
    //## statechart_method
    inline bool timedOut_IN() const;
    
    // countingDown:
    //## statechart_method
    inline bool countingDown_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus countingDown_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Room_Enum {
        OMNonState = 0,
        timedOut = 1,
        countingDown = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRoom : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Room, OMAnimatedRoom)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void timedOut_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void countingDown_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Room::rootState_IN() const {
    return true;
}

inline bool Room::timedOut_IN() const {
    return rootState_subState == timedOut;
}

inline bool Room::countingDown_IN() const {
    return rootState_subState == countingDown;
}

#endif
/*********************************************************************
	File Path	: Test\Debug\Room.h
*********************************************************************/
