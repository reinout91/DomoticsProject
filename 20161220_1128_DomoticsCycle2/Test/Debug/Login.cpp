/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Login
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\Login.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Login.h"
//## link itsUserList
#include "UserList.h"
//#[ ignore
#define UserPkg_Login_verifyCredentials_SERIALIZE \
    aomsmethod->addAttribute("userName", x2String(userName));\
    aomsmethod->addAttribute("password", x2String(password));
#define UserPkg_Login_Login_SERIALIZE OM_NO_OP

#define UserPkg_Login_verifyPassword_SERIALIZE OM_NO_OP
//#]

//## package UserPkg

//## class Login
Login::Login() {
    NOTIFY_CONSTRUCTOR(Login, Login(), 0, UserPkg_Login_Login_SERIALIZE);
    itsUserList = NULL;
}

Login::~Login() {
    NOTIFY_DESTRUCTOR(~Login, true);
    cleanUpRelations();
}

bool Login::verifyCredentials(char* userName, char* password) {
    NOTIFY_OPERATION(verifyCredentials, verifyCredentials(char*,char*), 2, UserPkg_Login_verifyCredentials_SERIALIZE);
    //#[ operation verifyCredentials(char*,char*)
    return 0;
    //#]
}

bool Login::verifyPassword() {
    NOTIFY_OPERATION(verifyPassword, verifyPassword(), 0, UserPkg_Login_verifyPassword_SERIALIZE);
    //#[ operation verifyPassword()
              return 0;
    //#]
}

UserList* Login::getItsUserList() const {
    return itsUserList;
}

void Login::setItsUserList(UserList* p_UserList) {
    if(p_UserList != NULL)
        {
            p_UserList->_setItsLogin(this);
        }
    _setItsUserList(p_UserList);
}

void Login::cleanUpRelations() {
    if(itsUserList != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUserList");
            Login* p_Login = itsUserList->getItsLogin();
            if(p_Login != NULL)
                {
                    itsUserList->__setItsLogin(NULL);
                }
            itsUserList = NULL;
        }
}

void Login::__setItsUserList(UserList* p_UserList) {
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

void Login::_setItsUserList(UserList* p_UserList) {
    if(itsUserList != NULL)
        {
            itsUserList->__setItsLogin(NULL);
        }
    __setItsUserList(p_UserList);
}

void Login::_clearItsUserList() {
    NOTIFY_RELATION_CLEARED("itsUserList");
    itsUserList = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLogin::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUserList", false, true);
    if(myReal->itsUserList)
        {
            aomsRelations->ADD_ITEM(myReal->itsUserList);
        }
}
//#]

IMPLEMENT_META_P(Login, UserPkg, UserPkg, false, OMAnimatedLogin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Test\Debug\Login.cpp
*********************************************************************/
