/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Admin
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Admin.h
*********************************************************************/

#ifndef Admin_H
#define Admin_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## class Admin
#include "User.h"
//## auto_generated
class UserList;

//## package UserPkg

//## class Admin
class Admin : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdmin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Admin();
    
    //## auto_generated
    ~Admin();
    
    ////    Operations    ////
    
    //## operation deleteUser(char*)
    void deleteUser(char* userName);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdmin : public OMAnimatedUser {
    DECLARE_META(Admin, OMAnimatedAdmin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Admin.h
*********************************************************************/
