/*********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Member
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Member.h
*********************************************************************/

#ifndef Member_H
#define Member_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UserPkg.h"
//## class Member
#include "User.h"
//## auto_generated
class UserList;

//## package UserPkg

//## class Member
class Member : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMember;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Member();
    
    //## auto_generated
    ~Member();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMember : public OMAnimatedUser {
    DECLARE_META(Member, OMAnimatedMember)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Test\Debug\Member.h
*********************************************************************/
