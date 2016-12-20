/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: User
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\User.h
*********************************************************************/

#ifndef User_H
#define User_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## link itsUserList
class UserList;

//## package UserPkg

//## class User
class User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUser;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    User();
    
    //## auto_generated
    ~User();
    
    ////    Additional operations    ////
    
    //## auto_generated
    char* getPassword() const;
    
    //## auto_generated
    void setPassword(char* p_password);
    
    //## auto_generated
    char* getUserName() const;
    
    //## auto_generated
    void setUserName(char* p_userName);
    
    //## auto_generated
    UserList* getItsUserList() const;
    
    //## auto_generated
    void setItsUserList(UserList* p_UserList);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    char* password;		//## attribute password
    
    char* userName;		//## attribute userName
    
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
class OMAnimatedUser : virtual public AOMInstance {
    DECLARE_META(User, OMAnimatedUser)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\User.h
*********************************************************************/
