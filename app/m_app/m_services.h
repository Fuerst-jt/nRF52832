#include "nrf_ble_qwr.h"
#include "nrf_sdh_ble.h"

//顺序写入实例
NRF_BLE_QWR_DEF(m_qwr);  

void init_services(void);