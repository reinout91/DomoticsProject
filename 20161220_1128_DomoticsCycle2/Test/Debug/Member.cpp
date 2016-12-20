/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Member
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Member.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Member.h"
//## auto_generated
#include "UserList.h"
//#[ ignore
#define UserPkg_Member_Member_SERIALIZE OM_NO_OP
//#]

//## package UserPkg

//## class Member
Member::Member() {
    NOTIFY_CONSTRUCTOR(Member, Member(), 0, UserPkg_Member_Member_SERIALIZE);
}

Member::~Member() {
    NOTIFY_DESTRUCTOR(~Member, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMember::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedMember::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Member, UserPkg, false, User, OMAnimatedUser, OMAnimatedMember)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Member.cpp
*********************************************************************/
