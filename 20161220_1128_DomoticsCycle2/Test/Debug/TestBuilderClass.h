/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: TestBuilderClass
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\TestBuilderClass.h
*********************************************************************/

#ifndef TestBuilderClass_H
#define TestBuilderClass_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsController
#include "Controller.h"
//## classInstance bedroomLight
#include "Light.h"
//## classInstance itsTelevision
#include "Television.h"
//## classInstance theUserInterface
#include "UserInterface.h"
//## auto_generated
#include "TestPkg.h"
//## classInstance itsAlarmRadio
#include "AlarmRadio.h"
//## classInstance itsBedroom
#include "Bedroom.h"
//## classInstance itsClock
#include "Clock.h"
//## classInstance itsCoffeeMachine
#include "CoffeeMachine.h"
//## classInstance itsHeating
#include "Heating.h"
//## classInstance itsKitchen
#include "Kitchen.h"
//## classInstance itsLivingRoom
#include "LivingRoom.h"
//## classInstance bedroomMovementSensor
#include "MovementSensor.h"
//## classInstance itsRadio
#include "Radio.h"
//## classInstance itsToilet
#include "Toilet.h"
//## classInstance itsUserList
#include "UserList.h"
//## package TestPkg

//## class TestBuilderClass
class TestBuilderClass : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTestBuilderClass;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TestBuilderClass(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TestBuilderClass();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    Television* getItsTelevision() const;
    
    //## auto_generated
    Light* getKitchenLight() const;
    
    //## auto_generated
    Light* getLivingRoomLight() const;
    
    //## auto_generated
    UserInterface* getTheUserInterface() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Controller itsController;		//## classInstance itsController
    
    Television itsTelevision;		//## classInstance itsTelevision
    
    Light kitchenLight;		//## classInstance kitchenLight
    
    Light livingRoomLight;		//## classInstance livingRoomLight
    
    MovementSensor toiletMovementSensor;		//## classInstance toiletMovementSensor
    
    UserInterface theUserInterface;		//## classInstance theUserInterface
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    //## auto_generated
    Light* getBedroomLight() const;
    
    //## auto_generated
    MovementSensor* getBedroomMovementSensor() const;
    
    //## auto_generated
    AlarmRadio* getItsAlarmRadio() const;
    
    //## auto_generated
    Bedroom* getItsBedroom() const;
    
    //## auto_generated
    Clock* getItsClock() const;
    
    //## auto_generated
    CoffeeMachine* getItsCoffeeMachine() const;
    
    //## auto_generated
    Heating* getItsHeating() const;
    
    //## auto_generated
    Kitchen* getItsKitchen() const;
    
    //## auto_generated
    LivingRoom* getItsLivingRoom() const;
    
    //## auto_generated
    Radio* getItsRadio() const;
    
    //## auto_generated
    Toilet* getItsToilet() const;
    
    //## auto_generated
    UserList* getItsUserList() const;
    
    //## auto_generated
    MovementSensor* getKitchenMovementSensor() const;
    
    //## auto_generated
    MovementSensor* getLivingRoomMovementSensor() const;
    
    //## auto_generated
    Light* getToiletLight() const;
    
    //## auto_generated
    MovementSensor* getToiletMovementSensor() const;

protected :

    Light bedroomLight;		//## classInstance bedroomLight
    
    MovementSensor bedroomMovementSensor;		//## classInstance bedroomMovementSensor
    
    AlarmRadio itsAlarmRadio;		//## classInstance itsAlarmRadio
    
    Bedroom itsBedroom;		//## classInstance itsBedroom
    
    Clock itsClock;		//## classInstance itsClock
    
    CoffeeMachine itsCoffeeMachine;		//## classInstance itsCoffeeMachine
    
    Heating itsHeating;		//## classInstance itsHeating
    
    Kitchen itsKitchen;		//## classInstance itsKitchen
    
    LivingRoom itsLivingRoom;		//## classInstance itsLivingRoom
    
    Radio itsRadio;		//## classInstance itsRadio
    
    Toilet itsToilet;		//## classInstance itsToilet
    
    UserList itsUserList;		//## classInstance itsUserList
    
    MovementSensor kitchenMovementSensor;		//## classInstance kitchenMovementSensor
    
    MovementSensor livingRoomMovementSensor;		//## classInstance livingRoomMovementSensor
    
    Light toiletLight;		//## classInstance toiletLight
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTestBuilderClass : virtual public AOMInstance {
    DECLARE_META(TestBuilderClass, OMAnimatedTestBuilderClass)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\TestBuilderClass.h
*********************************************************************/
