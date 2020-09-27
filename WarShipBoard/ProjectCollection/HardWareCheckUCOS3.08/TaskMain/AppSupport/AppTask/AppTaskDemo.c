/*******************************************************************
**Description: Copyright(c) 2018-2090 DengXiaojun,All rights reserved.
**Author: DengXiaoJun
**Date: 2020-09-26 21:54:18
**LastEditors: DengXiaoJun
**LastEditTime: 2020-09-28 00:04:53
**FilePath: \HardWareCheckUCOS3.08\TaskMain\AppSupport\AppTask\AppTaskDemo.c
**ModifyRecord1:    
******************************************************************/
#include "AppTaskConfig.h"

//任务控制块,8字节对齐
#pragma pack(8)
//任务堆栈
CPU_STK stackBufferTaskAppDemo[STK_SIZE_TASK_APP_DEMO];
#pragma pack()

//任务控制块
OS_TCB tcbTaskAppDemo;
//任务函数
void TaskFuncAppDemo(void *p_arg)
{
    OS_ERR err;
    p_arg = p_arg;
    while(1)
    {
        CoreDelayMs(500);
        BoardLedToogle(BOARD_LED_GREEN);
        SEGGER_RTT_WriteString(0,"App Task Demo\r\n");
    }
}













