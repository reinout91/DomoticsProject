/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: TestBuilderClass
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\TestBuilderClass.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TestBuilderClass.h"
//#[ ignore
#define TestPkg_TestBuilderClass_TestBuilderClass_SERIALIZE OM_NO_OP
//#]

//## package TestPkg

//## class TestBuilderClass
TestBuilderClass::TestBuilderClass(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TestBuilderClass, TestBuilderClass(), 0, TestPkg_TestBuilderClass_TestBuilderClass_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            toiletMovementSensor.setShouldDelete(false);
        }
        {
            theUserInterface.setShouldDelete(false);
        }
        {
            livingRoomLight.setShouldDelete(false);
        }
        {
            kitchenLight.setShouldDelete(false);
        }
        {
            itsTelevision.setShouldDelete(false);
        }
        {
            itsToilet.setShouldDelete(false);
        }
        {
            toiletLight.setShouldDelete(false);
        }
        {
            itsRadio.setShouldDelete(false);
        }
        {
            itsCoffeeMachine.setShouldDelete(false);
        }
        {
            itsAlarmRadio.setShouldDelete(false);
        }
        {
            itsHeating.setShouldDelete(false);
        }
        {
            itsClock.setShouldDelete(false);
        }
        {
            itsKitchen.setShouldDelete(false);
        }
        {
            itsLivingRoom.setShouldDelete(false);
        }
        {
            livingRoomMovementSensor.setShouldDelete(false);
        }
        {
            kitchenMovementSensor.setShouldDelete(false);
        }
        {
            bedroomLight.setShouldDelete(false);
        }
        {
            itsBedroom.setShouldDelete(false);
        }
        {
            bedroomMovementSensor.setShouldDelete(false);
        }
    }
    initRelations();
}

TestBuilderClass::~TestBuilderClass() {
    NOTIFY_DESTRUCTOR(~TestBuilderClass, true);
}

Controller* TestBuilderClass::getItsController() const {
    return (Controller*) &itsController;
}

Television* TestBuilderClass::getItsTelevision() const {
    return (Television*) &itsTelevision;
}

Light* TestBuilderClass::getKitchenLight() const {
    return (Light*) &kitchenLight;
}

Light* TestBuilderClass::getLivingRoomLight() const {
    return (Light*) &livingRoomLight;
}

UserInterface* TestBuilderClass::getTheUserInterface() const {
    return (UserInterface*) &theUserInterface;
}

bool TestBuilderClass::startBehavior() {
    bool done = true;
    done &= bedroomLight.startBehavior();
    done &= bedroomMovementSensor.startBehavior();
    done &= itsAlarmRadio.startBehavior();
    done &= itsBedroom.startBehavior();
    done &= itsClock.startBehavior();
    done &= itsCoffeeMachine.startBehavior();
    done &= itsHeating.startBehavior();
    done &= itsKitchen.startBehavior();
    done &= itsLivingRoom.startBehavior();
    done &= itsRadio.startBehavior();
    done &= itsTelevision.startBehavior();
    done &= itsToilet.startBehavior();
    done &= kitchenLight.startBehavior();
    done &= kitchenMovementSensor.startBehavior();
    done &= livingRoomLight.startBehavior();
    done &= livingRoomMovementSensor.startBehavior();
    done &= theUserInterface.startBehavior();
    done &= toiletLight.startBehavior();
    done &= toiletMovementSensor.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void TestBuilderClass::initRelations() {
    livingRoomLight.setItsController(&itsController);
    {
        
        theUserInterface.get_pControllerIn()->setItsIController(itsController.get_pUIOut()->getItsIController());
        
    }
    toiletMovementSensor.setItsController(&itsController);
    itsController.addItsDevice(&kitchenLight);
    itsController.setItsLight(&livingRoomLight);
    itsController.addItsDevice(&itsTelevision);
    {
        
        itsController.get_pUIIn()->setItsIUserInterface(theUserInterface.get_pControllerOut()->getItsIUserInterface());
        
    }
    toiletMovementSensor.setItsRoom(&itsToilet);
    itsToilet.addItsDevice(&toiletLight);
    itsController.addItsDevice(&toiletLight);
    itsToilet.setItsMovementSensor(&toiletMovementSensor);
    itsRadio.setItsController(&itsController);
    itsController.addItsDevice(&itsCoffeeMachine);
    itsAlarmRadio.setItsController(&itsController);
    itsHeating.setItsController(&itsController);
    itsAlarmRadio.setItsClock(&itsClock);
    livingRoomLight.setItsRoom(&itsLivingRoom);
    kitchenLight.setItsRoom(&itsKitchen);
    itsLivingRoom.addItsSensor(&livingRoomMovementSensor);
    itsKitchen.addItsSensor(&kitchenMovementSensor);
    bedroomLight.setItsRoom(&itsBedroom);
    itsBedroom.addItsSensor(&bedroomMovementSensor);
    bedroomLight.setItsController_1(&itsController);
    itsAlarmRadio.setItsRoom(&itsBedroom);
}

void TestBuilderClass::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        toiletMovementSensor.setActiveContext(theActiveContext, false);
        theUserInterface.setActiveContext(theActiveContext, false);
        livingRoomLight.setActiveContext(theActiveContext, false);
        kitchenLight.setActiveContext(theActiveContext, false);
        itsTelevision.setActiveContext(theActiveContext, false);
        itsToilet.setActiveContext(theActiveContext, false);
        toiletLight.setActiveContext(theActiveContext, false);
        itsRadio.setActiveContext(theActiveContext, false);
        itsCoffeeMachine.setActiveContext(theActiveContext, false);
        itsAlarmRadio.setActiveContext(theActiveContext, false);
        itsHeating.setActiveContext(theActiveContext, false);
        itsClock.setActiveContext(theActiveContext, false);
        itsKitchen.setActiveContext(theActiveContext, false);
        itsLivingRoom.setActiveContext(theActiveContext, false);
        livingRoomMovementSensor.setActiveContext(theActiveContext, false);
        kitchenMovementSensor.setActiveContext(theActiveContext, false);
        bedroomLight.setActiveContext(theActiveContext, false);
        itsBedroom.setActiveContext(theActiveContext, false);
        bedroomMovementSensor.setActiveContext(theActiveContext, false);
    }
}

void TestBuilderClass::destroy() {
    bedroomLight.destroy();
    bedroomMovementSensor.destroy();
    itsAlarmRadio.destroy();
    itsBedroom.destroy();
    itsClock.destroy();
    itsCoffeeMachine.destroy();
    itsHeating.destroy();
    itsKitchen.destroy();
    itsLivingRoom.destroy();
    itsRadio.destroy();
    itsTelevision.destroy();
    itsToilet.destroy();
    kitchenLight.destroy();
    kitchenMovementSensor.destroy();
    livingRoomLight.destroy();
    livingRoomMovementSensor.destroy();
    theUserInterface.destroy();
    toiletLight.destroy();
    toiletMovementSensor.destroy();
    OMReactive::destroy();
}

Light* TestBuilderClass::getBedroomLight() const {
    return (Light*) &bedroomLight;
}

MovementSensor* TestBuilderClass::getBedroomMovementSensor() const {
    return (MovementSensor*) &bedroomMovementSensor;
}

AlarmRadio* TestBuilderClass::getItsAlarmRadio() const {
    return (AlarmRadio*) &itsAlarmRadio;
}

Bedroom* TestBuilderClass::getItsBedroom() const {
    return (Bedroom*) &itsBedroom;
}

Clock* TestBuilderClass::getItsClock() const {
    return (Clock*) &itsClock;
}

CoffeeMachine* TestBuilderClass::getItsCoffeeMachine() const {
    return (CoffeeMachine*) &itsCoffeeMachine;
}

Heating* TestBuilderClass::getItsHeating() const {
    return (Heating*) &itsHeating;
}

Kitchen* TestBuilderClass::getItsKitchen() const {
    return (Kitchen*) &itsKitchen;
}

LivingRoom* TestBuilderClass::getItsLivingRoom() const {
    return (LivingRoom*) &itsLivingRoom;
}

Radio* TestBuilderClass::getItsRadio() const {
    return (Radio*) &itsRadio;
}

Toilet* TestBuilderClass::getItsToilet() const {
    return (Toilet*) &itsToilet;
}

UserList* TestBuilderClass::getItsUserList() const {
    return (UserList*) &itsUserList;
}

MovementSensor* TestBuilderClass::getKitchenMovementSensor() const {
    return (MovementSensor*) &kitchenMovementSensor;
}

MovementSensor* TestBuilderClass::getLivingRoomMovementSensor() const {
    return (MovementSensor*) &livingRoomMovementSensor;
}

Light* TestBuilderClass::getToiletLight() const {
    return (Light*) &toiletLight;
}

MovementSensor* TestBuilderClass::getToiletMovementSensor() const {
    return (MovementSensor*) &toiletMovementSensor;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTestBuilderClass::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsController);
    aomsRelations->addRelation("toiletMovementSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->toiletMovementSensor);
    aomsRelations->addRelation("theUserInterface", true, true);
    aomsRelations->ADD_ITEM(&myReal->theUserInterface);
    aomsRelations->addRelation("livingRoomLight", true, true);
    aomsRelations->ADD_ITEM(&myReal->livingRoomLight);
    aomsRelations->addRelation("kitchenLight", true, true);
    aomsRelations->ADD_ITEM(&myReal->kitchenLight);
    aomsRelations->addRelation("itsTelevision", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTelevision);
    aomsRelations->addRelation("itsToilet", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsToilet);
    aomsRelations->addRelation("toiletLight", true, true);
    aomsRelations->ADD_ITEM(&myReal->toiletLight);
    aomsRelations->addRelation("itsRadio", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRadio);
    aomsRelations->addRelation("itsCoffeeMachine", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCoffeeMachine);
    aomsRelations->addRelation("itsAlarmRadio", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsAlarmRadio);
    aomsRelations->addRelation("itsHeating", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHeating);
    aomsRelations->addRelation("itsClock", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsClock);
    aomsRelations->addRelation("itsKitchen", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKitchen);
    aomsRelations->addRelation("itsLivingRoom", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLivingRoom);
    aomsRelations->addRelation("livingRoomMovementSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->livingRoomMovementSensor);
    aomsRelations->addRelation("kitchenMovementSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->kitchenMovementSensor);
    aomsRelations->addRelation("bedroomLight", true, true);
    aomsRelations->ADD_ITEM(&myReal->bedroomLight);
    aomsRelations->addRelation("itsBedroom", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBedroom);
    aomsRelations->addRelation("bedroomMovementSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->bedroomMovementSensor);
    aomsRelations->addRelation("itsUserList", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUserList);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(TestBuilderClass, TestPkg, TestPkg, false, OMAnimatedTestBuilderClass)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\TestBuilderClass.cpp
*********************************************************************/
