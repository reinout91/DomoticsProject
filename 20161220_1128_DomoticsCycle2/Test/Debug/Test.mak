
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC11x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Users\Annelien\IBM\Rational\Rhapsody\8.1\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rational\Rhapsody\8.1"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=Test

all : $(TARGET_NAME)$(EXE_EXT) Test.mak

TARGET_MAIN=MainTest

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Device.obj \
  Light.obj \
  DeviceWithSettings.obj \
  Television.obj \
  Radio.obj \
  RtvDevice.obj \
  DeviceWithTimedAction.obj \
  CoffeeMachine.obj \
  Clock.obj \
  AlarmRadio.obj \
  Heating.obj \
  UserInterface.obj \
  iUserInterface.obj \
  Admin.obj \
  Member.obj \
  Login.obj \
  UserList.obj \
  User.obj \
  Controller.obj \
  iController.obj \
  TestBuilderClass.obj \
  Sensor.obj \
  MovementSensor.obj \
  Room.obj \
  Toilet.obj \
  LivingRoom.obj \
  Kitchen.obj \
  Bedroom.obj \
  DevicePkg.obj \
  UserPkg.obj \
  ControllerPkg.obj \
  TestPkg.obj \
  SensorPkg.obj \
  SpacePkg.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Device.obj : Device.cpp Device.h    DevicePkg.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Device.obj" "Device.cpp" 



Light.obj : Light.cpp Light.h    DevicePkg.h Controller.h Device.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Light.obj" "Light.cpp" 



DeviceWithSettings.obj : DeviceWithSettings.cpp DeviceWithSettings.h    DevicePkg.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DeviceWithSettings.obj" "DeviceWithSettings.cpp" 



Television.obj : Television.cpp Television.h    DevicePkg.h Controller.h RtvDevice.h DeviceWithSettings.h Device.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Television.obj" "Television.cpp" 



Radio.obj : Radio.cpp Radio.h    DevicePkg.h RtvDevice.h DeviceWithSettings.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Radio.obj" "Radio.cpp" 



RtvDevice.obj : RtvDevice.cpp RtvDevice.h    DevicePkg.h DeviceWithSettings.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RtvDevice.obj" "RtvDevice.cpp" 



DeviceWithTimedAction.obj : DeviceWithTimedAction.cpp DeviceWithTimedAction.h    DevicePkg.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DeviceWithTimedAction.obj" "DeviceWithTimedAction.cpp" 



CoffeeMachine.obj : CoffeeMachine.cpp CoffeeMachine.h    DevicePkg.h DeviceWithTimedAction.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CoffeeMachine.obj" "CoffeeMachine.cpp" 



Clock.obj : Clock.cpp Clock.h    DevicePkg.h AlarmRadio.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Clock.obj" "Clock.cpp" 



AlarmRadio.obj : AlarmRadio.cpp AlarmRadio.h    DevicePkg.h Clock.h Radio.h RtvDevice.h DeviceWithSettings.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlarmRadio.obj" "AlarmRadio.cpp" 



Heating.obj : Heating.cpp Heating.h    DevicePkg.h DeviceWithSettings.h Device.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Heating.obj" "Heating.cpp" 



UserInterface.obj : UserInterface.cpp UserInterface.h    UserPkg.h iController.h iUserInterface.h Controller.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UserInterface.obj" "UserInterface.cpp" 



iUserInterface.obj : iUserInterface.cpp iUserInterface.h    UserPkg.h Controller.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iUserInterface.obj" "iUserInterface.cpp" 



Admin.obj : Admin.cpp Admin.h    UserPkg.h User.h UserList.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Admin.obj" "Admin.cpp" 



Member.obj : Member.cpp Member.h    UserPkg.h User.h UserList.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Member.obj" "Member.cpp" 



Login.obj : Login.cpp Login.h    UserPkg.h UserList.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Login.obj" "Login.cpp" 



UserList.obj : UserList.cpp UserList.h    UserPkg.h Login.h User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UserList.obj" "UserList.cpp" 



User.obj : User.cpp User.h    UserPkg.h UserList.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Controller.obj : Controller.cpp Controller.h    ControllerPkg.h Device.h Sensor.h Television.h iUserInterface.h Light.h iController.h UserInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Controller.obj" "Controller.cpp" 



iController.obj : iController.cpp iController.h    ControllerPkg.h Controller.h UserInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iController.obj" "iController.cpp" 



TestBuilderClass.obj : TestBuilderClass.cpp TestBuilderClass.h    TestPkg.h Controller.h MovementSensor.h UserInterface.h Light.h Television.h Toilet.h Radio.h CoffeeMachine.h AlarmRadio.h Heating.h Clock.h Kitchen.h LivingRoom.h Bedroom.h UserList.h Device.h Room.h Sensor.h iController.h iUserInterface.h RtvDevice.h DeviceWithSettings.h DeviceWithTimedAction.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TestBuilderClass.obj" "TestBuilderClass.cpp" 



Sensor.obj : Sensor.cpp Sensor.h    SensorPkg.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensor.obj" "Sensor.cpp" 



MovementSensor.obj : MovementSensor.cpp MovementSensor.h    SensorPkg.h Toilet.h Sensor.h Controller.h Room.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MovementSensor.obj" "MovementSensor.cpp" 



Room.obj : Room.cpp Room.h    SpacePkg.h Device.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Room.obj" "Room.cpp" 



Toilet.obj : Toilet.cpp Toilet.h    SpacePkg.h MovementSensor.h Room.h Device.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Toilet.obj" "Toilet.cpp" 



LivingRoom.obj : LivingRoom.cpp LivingRoom.h    SpacePkg.h Room.h Device.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LivingRoom.obj" "LivingRoom.cpp" 



Kitchen.obj : Kitchen.cpp Kitchen.h    SpacePkg.h Room.h Device.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Kitchen.obj" "Kitchen.cpp" 



Bedroom.obj : Bedroom.cpp Bedroom.h    SpacePkg.h Room.h Device.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Bedroom.obj" "Bedroom.cpp" 



DevicePkg.obj : DevicePkg.cpp DevicePkg.h    Device.h Light.h DeviceWithSettings.h Television.h Radio.h RtvDevice.h DeviceWithTimedAction.h CoffeeMachine.h Clock.h AlarmRadio.h Heating.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DevicePkg.obj" "DevicePkg.cpp" 



UserPkg.obj : UserPkg.cpp UserPkg.h    UserInterface.h iUserInterface.h Admin.h Member.h Login.h UserList.h User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UserPkg.obj" "UserPkg.cpp" 



ControllerPkg.obj : ControllerPkg.cpp ControllerPkg.h    Controller.h iController.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ControllerPkg.obj" "ControllerPkg.cpp" 



TestPkg.obj : TestPkg.cpp TestPkg.h    TestBuilderClass.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TestPkg.obj" "TestPkg.cpp" 



SensorPkg.obj : SensorPkg.cpp SensorPkg.h    Sensor.h MovementSensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorPkg.obj" "SensorPkg.cpp" 



SpacePkg.obj : SpacePkg.cpp SpacePkg.h    Room.h Toilet.h LivingRoom.h Kitchen.h Bedroom.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SpacePkg.obj" "SpacePkg.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Test.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Test.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Device.obj erase Device.obj
	if exist Light.obj erase Light.obj
	if exist DeviceWithSettings.obj erase DeviceWithSettings.obj
	if exist Television.obj erase Television.obj
	if exist Radio.obj erase Radio.obj
	if exist RtvDevice.obj erase RtvDevice.obj
	if exist DeviceWithTimedAction.obj erase DeviceWithTimedAction.obj
	if exist CoffeeMachine.obj erase CoffeeMachine.obj
	if exist Clock.obj erase Clock.obj
	if exist AlarmRadio.obj erase AlarmRadio.obj
	if exist Heating.obj erase Heating.obj
	if exist UserInterface.obj erase UserInterface.obj
	if exist iUserInterface.obj erase iUserInterface.obj
	if exist Admin.obj erase Admin.obj
	if exist Member.obj erase Member.obj
	if exist Login.obj erase Login.obj
	if exist UserList.obj erase UserList.obj
	if exist User.obj erase User.obj
	if exist Controller.obj erase Controller.obj
	if exist iController.obj erase iController.obj
	if exist TestBuilderClass.obj erase TestBuilderClass.obj
	if exist Sensor.obj erase Sensor.obj
	if exist MovementSensor.obj erase MovementSensor.obj
	if exist Room.obj erase Room.obj
	if exist Toilet.obj erase Toilet.obj
	if exist LivingRoom.obj erase LivingRoom.obj
	if exist Kitchen.obj erase Kitchen.obj
	if exist Bedroom.obj erase Bedroom.obj
	if exist DevicePkg.obj erase DevicePkg.obj
	if exist UserPkg.obj erase UserPkg.obj
	if exist ControllerPkg.obj erase ControllerPkg.obj
	if exist TestPkg.obj erase TestPkg.obj
	if exist SensorPkg.obj erase SensorPkg.obj
	if exist SpacePkg.obj erase SpacePkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
