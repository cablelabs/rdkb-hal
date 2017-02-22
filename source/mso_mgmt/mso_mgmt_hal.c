
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mso_mgmt_hal.h"

/* mso_getpwd() function */
/**
* @description Gets the password of the day for mso user.
* @param pwd - a pointer to a buffer that was preallocated by the caller.  This is where the output is 
written.
* 
* @return The status of the operation.
* @retval mso_pwd_ret_status
            Invalid_PWD,
            Good_PWD,
            Unique_PWD,
            Expired_PWD, 
            TimeError
*
* @execution Synchronous.
* @sideeffect None.
*
*
*/
mso_pwd_ret_status mso_validatepwd(char *pwd)
{
  mso_pwd_ret_status ReturnVal = Invalid_PWD;
  return ReturnVal;
}

/* mso_set_pod_seed : */
/**
* @description Sets the PoD seed for mso password validation.
* @param seed - PoD seed
*
* @return the status of the operation.
* @retval RETURN_OK if successful.
* @retval RETURN_ERR if any error is detected.
*
* @execution Synchronous.
* @sideeffect None.
*
* @note This function must not suspend and must not invoke any blocking system 
* calls. It should probably just send a message to a driver event handler task. 
*
*/
INT mso_set_pod_seed(char* pSeed)
{
    if (pSeed == NULL)
    {
        return RETURN_ERR;
    }
    else
    {
        return RETURN_OK;
    }
}

/* mso_get_pod_seed : */
/**
* @description Gets the PoD seed for mso password validation,
* @param 
*    CHAR* pSseed - a pointer to a buffer that was preallocated by the caller.  This is where the output is written
*
* @return the status of the operation.
* @retval RETURN_OK if successful.
* @retval RETURN_ERR if any error is detected.
*
* @execution Synchronous.
* @sideeffect None.
*
* @note This function retrieves the decrypted seed set in the Config file 
*       and SNMP OID rdkbEncryptedClientSeed. pSeed for security reasons MUST be manually
*       overwritten after use.
*/
INT mso_get_pod_seed(char* pSeed)
{
    if (pSeed == NULL)
    {
        return RETURN_ERR;
    }
    else
    {
        return RETURN_OK;
    }
}
