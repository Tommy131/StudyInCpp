#include <iostream>
#include <stdio.h>
using namespace std;

double fact(int n);

int main()
{
    // ~ m, n;
    int input1, input2;
    double m, n, u, result;

    cout << "--------------------------------------------------" << endl;
    // cout << "INFO >> Please enter a positive integer [m] (Indicates to take out m elements):" << endl;
    cout << "INFO >> 请输入一个正整数 [m] (表示 m 个元素): ";
    scanf("%d", &input1);
    // printf("INFO >> Value [m] is: %d\n", input1);
    printf("INFO >> 获取到 m 的值是: %d\n", input1);
    cout << "--------------------------------------------------\n" << endl;

    cout << "--------------------------------------------------" << endl;
    cout << "INFO >> 请输入一个正整数 [n] (表示个数): ";
    scanf("%d", &input2);
    // printf("INFO >> Value [n] is: %d\n", input2);
    printf("INFO >> 获取到 n 的值是: %d\n", input2);
    cout << "--------------------------------------------------\n" << endl;

    if(input2 < input1) {
        // cout << "ERROR >> [n] must be bigger than or equal (≥) [m] !" << endl;
        cout << "ERROR >> [n] 的值必须大于等于 (≥) [m] !" << endl;
        return 0;
    }

    m = fact(input1); // m!
    n = fact(input2); // n!
    u = fact(input2 - input1); // (n - m)!

    result = n / (m * u);
    // cout << "[RESULT] The Combination C(m, n) is: " << result << endl << endl;
    cout << "RESULT >> 组合数 C(m, n) 的值是: " << result << endl << endl;

    system("pause");
    return 0;
}

/**
 * Define the factorial function
 */
double fact(int n)
{
    double result = 1;
    if(n > 0)
    {
        for(int i = 1; i <= n; i++)
        {
            result *= i;
        }
    }
    else if(n < 0)
    {
        result = n;
    }
    return result;
}