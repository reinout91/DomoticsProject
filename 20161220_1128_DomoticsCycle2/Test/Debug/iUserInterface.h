/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: iUserInterface
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\iUserInterface.h
*********************************************************************/

#ifndef iUserInterface_H
#define iUserInterface_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## link itsController
class Controller;

//## package UserPkg

//## class iUserInterface
class iUserInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediUserInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iUserInterface();
    
    //## auto_generated
    virtual ~iUserInterface() = 0;
    
    ////    Operations    ////
    
    //## operation getDesiredDevice()
    virtual void getDesiredDevice() = 0;
    
    //## operation getDesiredSetting()
    virtual void getDesiredSetting() = 0;
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediUserInterface : virtual public AOMInstance {
    DECLARE_META(iUserInterface, OMAnimatediUserInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\iUserInterface.h
*********************************************************************/
