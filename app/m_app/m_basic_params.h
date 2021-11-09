#include<stdint.h>

//GAP图标
#include "ble_types.h"

#define APP_BLE_CONN_CFG_TAG            1

#define APP_BLE_OBSERVER_PRIO           3                                   //监听优先级

const char device_name[] = {0xE5,0x8D,0xB1,0xE9,0x99,0xA9,0xE5,0x8B,0xBF,0xE5,0x8A,0xA8};
#define DEVICE_NAME_CN                  device_name
#define DEVICE_NAME                     "nRF52832"                          //设备名称
#define DEVICE_ICON                     BLE_APPEARANCE_HEART_RATE_SENSOR_HEART_RATE_BELT    //设备图标
//首选连接参数
#define MIN_CONN_INTERVAL               MSEC_TO_UNITS(100, UNIT_1_25_MS)    //最小连接间隔
#define MAX_CONN_INTERVAL               MSEC_TO_UNITS(200, UNIT_1_25_MS)    //最大连接间隔
#define SLAVE_LATENCY                   0                                   //从机延时
#define CONN_SUP_TIMEOUT                MSEC_TO_UNITS(4000, UNIT_10_MS)     //连接超时

//广播间隔&持续时间
#define APP_ADV_INTERVAL                300                                 //广播间隔
#define APP_ADV_DURATION                18000                               //持续时间


//连接参数
#define FIRST_CONN_PARAMS_UPDATE_DELAY  APP_TIMER_TICKS(5000)               //首次连接参数更新时间
#define NEXT_CONN_PARAMS_UPDATE_DELAY   APP_TIMER_TICKS(30000)              //连接参数更新间隔
#define MAX_CONN_PARAMS_UPDATE_COUNT    3                                   //最大连接参数协商次数
uint16_t m_conn_handle = BLE_CONN_HANDLE_INVALID;                           //连接开始到更新连接参数计时

//配对参数
#define SEC_PARAM_BOND                  1                                       /**< Perform bonding. */
#define SEC_PARAM_MITM                  0                                       /**< Man In The Middle protection not required. */
#define SEC_PARAM_LESC                  0                                       /**< LE Secure Connections not enabled. */
#define SEC_PARAM_KEYPRESS              0                                       /**< Keypress notifications not enabled. */
#define SEC_PARAM_IO_CAPABILITIES       BLE_GAP_IO_CAPS_NONE                    /**< No I/O capabilities. */
#define SEC_PARAM_OOB                   0                                       /**< Out Of Band data not available. */
#define SEC_PARAM_MIN_KEY_SIZE          7                                       /**< Minimum encryption key size. */
#define SEC_PARAM_MAX_KEY_SIZE          16                                      /**< Maximum encryption key size. */

#define DEAD_BEEF                       0xDEADBEEF                              /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */
