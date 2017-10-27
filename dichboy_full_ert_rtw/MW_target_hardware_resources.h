#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#include "driver_ev3.h"
#include "ev3_constants.h"
#include "ev3_include.h"
#include "lms2012.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE LEGO MINDSTORMS EV3
#define MW_CONNECTIONINFO_TCPIP_IPADDRESS codertarget.ev3.internal.getEV3ExtmodeIPaddr
#define MW_CONNECTIONINFO_TCPIP_PORT 17725
#define MW_CONNECTIONINFO_TCPIP_VERBOSE 0
#define MW_EXTMODE_CONFIGURATION TCP/IP
#define MW_RTOS Linux
#define MW_RTOSBASERATETASKPRIORITY 40
#define MW_DETECTTASKOVERRUNS 0.000000
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_HWCONNECTION_TYPE 0
#define MW_HWCONNECTION_DEVICEID 00aa00bb00cc
#define MW_NETWORKING_IPADDRESS 192.168.1.2
#define MW_EXTMODE_IPADDRESSCPY 192.168.1.51
#define MW_DATAVERSION 2016.02
#define MW_TARGETSERVICES_RUNNING 0.000000
#define MW_PROFILER_CONFIGURATION 0.000000
#define MW_MULTI_TASKING_MODE 1

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
