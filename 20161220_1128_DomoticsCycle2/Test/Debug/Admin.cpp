/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Admin
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Admin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Admin.h"
//## auto_generated
#include "UserList.h"
//#[ ignore
#define UserPkg_Admin_Admin_SERIALIZE OM_NO_OP

#define UserPkg_Admin_deleteUser_SERIALIZE aomsmethod->addAttribute("userName", x2String(userName));
//#]

//## package UserPkg

//## class Admin
Admin::Admin() {
    NOTIFY_CONSTRUCTOR(Admin, Admin(), 0, UserPkg_Admin_Admin_SERIALIZE);
}

Admin::~Admin() {
    NOTIFY_DESTRUCTOR(~Admin, false);
}

void Admin::deleteUser(char* userName) {
    NOTIFY_OPERATION(deleteUser, deleteUser(char*), 1, UserPkg_Admin_deleteUser_SERIALIZE);
    //#[ operation deleteUser(char*)
    //#]
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAdmin::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedAdmin::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Admin, UserPkg, false, User, OMAnimatedUser, OMAnimatedAdmin)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Admin.cpp
*********************************************************************/
