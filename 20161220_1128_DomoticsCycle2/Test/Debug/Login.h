/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Login
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Login.h
*********************************************************************/

#ifndef Login_H
#define Login_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## link itsUserList
class UserList;

//## package UserPkg

//## class Login
class Login {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLogin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Login();
    
    //## auto_generated
    ~Login();
    
    ////    Operations    ////
    
    //## operation verifyCredentials(char*,char*)
    bool verifyCredentials(char* userName, char* password);

private :

    //## operation verifyPassword()
    bool verifyPassword();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    UserList* getItsUserList() const;
    
    //## auto_generated
    void setItsUserList(UserList* p_UserList);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    UserList* itsUserList;		//## link itsUserList
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUserList(UserList* p_UserList);
    
    //## auto_generated
    void _setItsUserList(UserList* p_UserList);
    
    //## auto_generated
    void _clearItsUserList();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLogin : virtual public AOMInstance {
    DECLARE_META(Login, OMAnimatedLogin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Login.h
*********************************************************************/
