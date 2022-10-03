#include <iostream>
using namespace std;

// typedef = type define
typedef int integer;

// 常量定义
const int LENGTH = 10;
const int WIDTH = 100;

int main()
{
    short unsigned int j = 50000; // 无符号短整数
    short int si;                 // 有符号短整数
    si = j;
    cout << si << " <:> " << j << endl;

    integer area = LENGTH * WIDTH;
    cout << "Length * Width = " << area << endl;

    system("pause");
    return 0;
}