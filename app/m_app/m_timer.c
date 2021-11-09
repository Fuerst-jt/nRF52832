#include "m_timer.h"
void init_timers(void)
{
    // 初始化
    ret_code_t err_code = app_timer_init();
    APP_ERROR_CHECK(err_code);

    // 自定义定时器
}