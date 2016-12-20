/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: UserList
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\UserList.h
*********************************************************************/

#ifndef UserList_H
#define UserList_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## auto_generated
#include <oxf\omcollec.h>
//## link itsUser
class User;

//## link itsLogin
class Login;

//## package UserPkg

//## class UserList
class UserList {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserList;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~UserList();
    
    ////    Operations    ////
    
    //## operation findUser(int)
    void findUser(int userName);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Login* getItsLogin() const;
    
    //## auto_generated
    void setItsLogin(Login* p_Login);
    
    //## auto_generated
    OMIterator<User*> getItsUser() const;
    
    //## auto_generated
    void addItsUser(User* p_User);
    
    //## auto_generated
    void removeItsUser(User* p_User);
    
    //## auto_generated
    void clearItsUser();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Login* itsLogin;		//## link itsLogin
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsLogin(Login* p_Login);
    
    //## auto_generated
    void _setItsLogin(Login* p_Login);
    
    //## auto_generated
    void _clearItsLogin();
    
    //## auto_generated
    void _addItsUser(User* p_User);
    
    //## auto_generated
    void _removeItsUser(User* p_User);
    
    //## auto_generated
    void _clearItsUser();
    
    //## auto_generated
    UserList();

protected :

    OMCollection<User*> itsUser;		//## link itsUser
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserList : virtual public AOMInstance {
    DECLARE_META(UserList, OMAnimatedUserList)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\UserList.h
*********************************************************************/
