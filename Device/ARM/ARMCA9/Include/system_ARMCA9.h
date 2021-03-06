/******************************************************************************
 * @file     system_ARMCA9.h
 * @brief    CMSIS Device System Header File for ARM Cortex-A Device Series
 * @version  V1.00
 * @date     22 Feb 2017
 *
 * @note
 *
 ******************************************************************************/
/*
 * Copyright (c) 2009-2017 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __SYSTEM_ARMCA9_H
#define __SYSTEM_ARMCA9_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void(*IRQHandler)();
uint32_t InterruptHandlerRegister(IRQn_Type, IRQHandler);
uint32_t InterruptHandlerUnregister(IRQn_Type);
void SystemCoreClockUpdate (void);
extern uint32_t SystemCoreClock;
void SystemInit (void);
void MMU_CreateTranslationTable(void);

#ifdef __cplusplus
}
#endif

#endif /* __SYSTEM_ARMCA9_H */
