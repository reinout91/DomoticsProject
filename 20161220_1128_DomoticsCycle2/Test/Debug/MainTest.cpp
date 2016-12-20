/********************************************************************
	Rhapsody	: 8.1 
	Login		: Annelien
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Debug
//!	Generated Date	: Tue, 20, Dec 2016  
	File Path	: Test\Debug\MainTest.cpp
*********************************************************************/

//## auto_generated
#include "MainTest.h"
//## auto_generated
#include "TestBuilderClass.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            TestBuilderClass * p_TestBuilderClass;
            p_TestBuilderClass = new TestBuilderClass;
            p_TestBuilderClass->startBehavior();
            //#[ configuration Test::Debug 
            //#]
            OXF::start();
            delete p_TestBuilderClass;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Test\Debug\MainTest.cpp
*********************************************************************/
