#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * 判断是否是闰年
 * 闰年:
 * 能被4整除, 不能被100整除.
 * 能被4整除, 也能被400整除.
*/
bool isLeapYear(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

/**
 * 获取一个月有多少天
*/
int getDaysInMonth(int month, int year)
{
    int daysInMonth;
    switch(month)
    {
        default:
            daysInMonth = 31;
        break;

        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
        break;
    }
    return daysInMonth;
}

int main(void)
{
    cout << "INFO > 请输入日期 (格式=[yyyy-mm-dd]): ";

    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    if((month < 1 || month > 12) || (day < 1 || day > 31)) {
        cout << "ERROR > 格式不正确!" << endl;
        return 1;
    }
    printf("INFO > [INPUT] 输入的日期是: %d-%d-%d\n", year, month, day);

    int days = 0;
    for(int i = 1; i < month; i++)
    {
        days += getDaysInMonth(i, year);
    }
    days += day;
    printf("INFO > [RESULT] %d年%d月%d日 是 %d年的第 %d 天.\n", year, month, day, year, days);

    return 0;
}