#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // 新增：引入时间库，用于日志时间戳
#include "utils.h"

int main()
{
    // 新增：日志功能——输出当前时间+操作描述
    time_t now = time(NULL);  // 获取当前时间戳
    struct tm* local_time = localtime(&now);  // 转换为本地时间
    // 格式化输出：年-月-日 时:分:秒 [日志] 内容
    printf("[%d-%02d-%02d %02d:%02d:%02d] [INFO] 程序启动\n",
           local_time->tm_year + 1900,  // 年份需+1900（tm_year从1900开始计数）
           local_time->tm_mon + 1,     // 月份需+1（tm_mon从0开始计数）
           local_time->tm_mday,
           local_time->tm_hour,
           local_time->tm_min,
           local_time->tm_sec);

    printf("Hello Git!\n");//修改：问候
    printInfo(); // 新增：调用工具函数

    return 0;
}
