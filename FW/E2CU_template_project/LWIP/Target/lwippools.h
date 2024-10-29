/* USER CODE BEGIN Header */
/**
 ******************************************************************************
  * File Name          : lwippools.h
  * Description        : This file provides initialization code for LWIP
  *                      middleWare.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

 /******************************************************************************
 * If MEMP_USE_CUSTOM_POOLS option is enabled:
 *  - include this lwippools.h file that defines additional pools beyond the
 *    "standard" ones required by lwIP.
 *  - make sure you have lwippools.h in your include path.
 ******************************************************************************/

/* MEMP_USE_CUSTOM_POOLS is enabled => This file is required by LwIP */

#ifdef __cplusplus
 extern "C" {
#endif

/* USER CODE BEGIN 0 */
/* Warning 1: The following code is only given as an example */
/* You can use this example code by uncommenting it */
/* -------------- EXAMPLE of CODE ------------------------*/
/* Define three pools with sizes 256, 512, and 1512 bytes */

#if MEM_USE_POOLS
LWIP_MALLOC_MEMPOOL_START
LWIP_MALLOC_MEMPOOL(40, 256)
LWIP_MALLOC_MEMPOOL(25, 512)
LWIP_MALLOC_MEMPOOL(15, 1024)
LWIP_MALLOC_MEMPOOL(10, 2048)
LWIP_MALLOC_MEMPOOL(5, 4096)
LWIP_MALLOC_MEMPOOL(5, 8192)
LWIP_MALLOC_MEMPOOL_END
#endif

/* -------------- END of EXAMPLE of CODE -----------------*/

/* USER CODE END 0 */

#ifdef __cplusplus
}
#endif
