/*----------------------------------------------------------------------------
 * Copyright (c) <2018>, <Huawei Technologies Co., Ltd>
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, this list of
 * conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list
 * of conditions and the following disclaimer in the documentation and/or other materials
 * provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific prior written
 * permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *---------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------
 * Notice of Export Control Law
 * ===============================================
 * Huawei LiteOS may be subject to applicable export control laws and regulations, which might
 * include those applicable to Huawei LiteOS of U.S. and the country in which you are located.
 * Import, export and usage of Huawei LiteOS in any manner by you shall be in compliance with such
 * applicable export control laws and regulations.
 *---------------------------------------------------------------------------*/
/**
 *  DATE                AUTHOR      INSTRUCTION
 *  2019-11-19 15:44  zhangqianfu  The first version
 *
 */
#ifndef LITEOS_LAB_IOT_LINK_OC_OC_MQTT_OC_MQTT_AL_OC_MQTT_AT_H_
#define LITEOS_LAB_IOT_LINK_OC_OC_MQTT_OC_MQTT_AL_OC_MQTT_AT_H_


#include <stdint.h>
#include <stddef.h>

char *hwoc_mqtt_version();
int hwoc_mqtt_connect(int bsmode, unsigned short lifetime, const char *ip, const char *port,
                               const char *deviceid, const char *devicepasswd);
int  hwoc_mqtt_disconnect();
int  hwoc_mqtt_publish(int qos,char *topic,uint8_t *payload,int len);
int  hwoc_mqtt_send(int qos,uint8_t *payload,int len);
void hwoc_mqtt_recvpub(int qos,int dup,const char *topic,uint8_t *payload, int len);
void hwoc_mqtt_received(int qos,uint8_t *payload, int len);


#endif /* LITEOS_LAB_IOT_LINK_OC_OC_MQTT_OC_MQTT_AL_OC_MQTT_AT_H_ */
