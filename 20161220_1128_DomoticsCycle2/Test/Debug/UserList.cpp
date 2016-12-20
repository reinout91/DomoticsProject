/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: UserList
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\UserList.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserList.h"
//## link itsLogin
#include "Login.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define UserPkg_UserList_UserList_SERIALIZE OM_NO_OP

#define UserPkg_UserList_findUser_SERIALIZE aomsmethod->addAttribute("userName", x2String(userName));
//#]

//## package UserPkg

//## class UserList
UserList::~UserList() {
    NOTIFY_DESTRUCTOR(~UserList, true);
    cleanUpRelations();
}

void UserList::findUser(int userName) {
    NOTIFY_OPERATION(findUser, findUser(int), 1, UserPkg_UserList_findUser_SERIALIZE);
    //#[ operation findUser(int)
    //#]
}

Login* UserList::getItsLogin() const {
    return itsLogin;
}

void UserList::setItsLogin(Login* p_Login) {
    if(p_Login != NULL)
        {
            p_Login->_setItsUserList(this);
        }
    _setItsLogin(p_Login);
}

OMIterator<User*> UserList::getItsUser() const {
    OMIterator<User*> iter(itsUser);
    return iter;
}

void UserList::addItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsUserList(this);
        }
    _addItsUser(p_User);
}

void UserList::removeItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->__setItsUserList(NULL);
        }
    _removeItsUser(p_User);
}

void UserList::clearItsUser() {
    OMIterator<User*> iter(itsUser);
    while (*iter){
        (*iter)->_clearItsUserList();
        iter++;
    }
    _clearItsUser();
}

void UserList::cleanUpRelations() {
    if(itsLogin != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLogin");
            UserList* p_UserList = itsLogin->getItsUserList();
            if(p_UserList != NULL)
                {
                    itsLogin->__setItsUserList(NULL);
                }
            itsLogin = NULL;
        }
    {
        OMIterator<User*> iter(itsUser);
        while (*iter){
            UserList* p_UserList = (*iter)->getItsUserList();
            if(p_UserList != NULL)
                {
                    (*iter)->__setItsUserList(NULL);
                }
            iter++;
        }
        itsUser.removeAll();
    }
}

void UserList::__setItsLogin(Login* p_Login) {
    itsLogin = p_Login;
    if(p_Login != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLogin", p_Login, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLogin");
        }
}

void UserList::_setItsLogin(Login* p_Login) {
    if(itsLogin != NULL)
        {
            itsLogin->__setItsUserList(NULL);
        }
    __setItsLogin(p_Login);
}

void UserList::_clearItsLogin() {
    NOTIFY_RELATION_CLEARED("itsLogin");
    itsLogin = NULL;
}

void UserList::_addItsUser(User* p_User) {
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
    itsUser.add(p_User);
}

void UserList::_removeItsUser(User* p_User) {
    NOTIFY_RELATION_ITEM_REMOVED("itsUser", p_User);
    itsUser.remove(p_User);
}

void UserList::_clearItsUser() {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser.removeAll();
}

UserList::UserList() {
    NOTIFY_CONSTRUCTOR(UserList, UserList(), 0, UserPkg_UserList_UserList_SERIALIZE);
    itsLogin = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserList::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLogin", false, true);
    if(myReal->itsLogin)
        {
            aomsRelations->ADD_ITEM(myReal->itsLogin);
        }
    aomsRelations->addRelation("itsUser", false, false);
    {
        OMIterator<User*> iter(myReal->itsUser);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(UserList, UserPkg, UserPkg, false, OMAnimatedUserList)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\UserList.cpp
*********************************************************************/
