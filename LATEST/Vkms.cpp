/******************************************************************************/
/* File   : Vkms.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infVkms_Version.h"
#include "infVkms_EcuM.h"
#include "infVkms_Dcm.h"
#include "infVkms_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Vkms:
      public abstract_module
{
   public:
      FUNC(void, VKMS_CODE) InitFunction   (void);
      FUNC(void, VKMS_CODE) DeInitFunction (void);
      FUNC(void, VKMS_CODE) GetVersionInfo (void);
      FUNC(void, VKMS_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Vkms, VKMS_VAR) Vkms;
CONSTP2VAR(infEcuMClient, VKMS_VAR, VKMS_CONST) gptrinfEcuMClient_Vkms = &Vkms;
CONSTP2VAR(infDcmClient,  VKMS_VAR, VKMS_CONST) gptrinfDcmClient_Vkms  = &Vkms;
CONSTP2VAR(infSchMClient, VKMS_VAR, VKMS_CONST) gptrinfSchMClient_Vkms = &Vkms;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, VKMS_CODE) module_Vkms::InitFunction(void){
   Vkms.IsInitDone = E_OK;
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
   Vkms.IsInitDone = E_NOT_OK;
}

FUNC(void, VKMS_CODE) module_Vkms::GetVersionInfo(void){
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
}

#include "Vkms_Unused.h"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

