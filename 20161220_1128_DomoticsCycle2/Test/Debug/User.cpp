/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: User
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User.h"
//## link itsUserList
#include "UserList.h"
//#[ ignore
#define UserPkg_User_User_SERIALIZE OM_NO_OP
//#]

//## package UserPkg

//## class User
User::User() {
    NOTIFY_CONSTRUCTOR(User, User(), 0, UserPkg_User_User_SERIALIZE);
    itsUserList = NULL;
}

User::~User() {
    NOTIFY_DESTRUCTOR(~User, true);
    cleanUpRelations();
}

char* User::getPassword() const {
    return password;
}

void User::setPassword(char* p_password) {
    password = p_password;
}

char* User::getUserName() const {
    return userName;
}

void User::setUserName(char* p_userName) {
    userName = p_userName;
}

UserList* User::getItsUserList() const {
    return itsUserList;
}

void User::setItsUserList(UserList* p_UserList) {
    if(p_UserList != NULL)
        {
            p_UserList->_addItsUser(this);
        }
    _setItsUserList(p_UserList);
}

void User::cleanUpRelations() {
    if(itsUserList != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUserList");
            UserList* current = itsUserList;
            if(current != NULL)
                {
                    current->_removeItsUser(this);
                }
            itsUserList = NULL;
        }
}

void User::__setItsUserList(UserList* p_UserList) {
    itsUserList = p_UserList;
    if(p_UserList != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUserList", p_UserList, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUserList");
        }
}

void User::_setItsUserList(UserList* p_UserList) {
    if(itsUserList != NULL)
        {
            itsUserList->_removeItsUser(this);
        }
    __setItsUserList(p_UserList);
}

void User::_clearItsUserList() {
    NOTIFY_RELATION_CLEARED("itsUserList");
    itsUserList = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUser::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("userName", x2String(myReal->userName));
    aomsAttributes->addAttribute("password", x2String(myReal->password));
}

void OMAnimatedUser::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUserList", false, true);
    if(myReal->itsUserList)
        {
            aomsRelations->ADD_ITEM(myReal->itsUserList);
        }
}
//#]

IMPLEMENT_META_P(User, UserPkg, UserPkg, false, OMAnimatedUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\User.cpp
*********************************************************************/
