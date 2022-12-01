#include <iostream>
using namespace std;

int main(void)
{
    // 初始化定义参数
    int number, *newNumber;

    cout << "number 的地址是: " << &number << endl;
    cout << "number 的值是: " << number << endl;
    cout << "-------------------------------------" << endl;
    cout << "newNumber 的指针是: " << *newNumber << endl;
    cout << "newNumber 的值是: " << newNumber << endl;
    cout << "newNumber 的地址是: " << &newNumber << endl << endl;
    cout << "-------------------------------------" << endl << endl;


    cout << "输入任意数字: ";
    cin >> number;

    cout << endl << "-------------------------------------" << endl;
    cout << "number 的地址是: " << &number << endl;
    cout << "number 的值是: " << number << endl;
    cout << "newNumber 的地址是: " << &newNumber << endl << endl;
    cout << "newNumber 的值是: " << newNumber << endl;
    cout << "newNumber 的指针是: " << *newNumber << endl;
    cout << "-------------------------------------" << endl;

    // *newNumber = number;
    newNumber = &number;

    cout << "newNumber 的地址是: " << &newNumber << endl;
    cout << "newNumber 的值是: " << newNumber << endl;
    cout << "newNumber 指向的值是: " << *newNumber << endl;


    int *p;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << endl << "-------------------------------------" << endl;
    cout << "a 的值是: " << a << endl;
    cout << "a 的地址是: " << &a << endl;
    cout << "a + 1是: " << a + 1 << endl;
    cout << "*a 是: " << *a << endl;
    cout << "*a + 1 是: " << *a + 1 << endl;
    cout << "a[0] 的值是: " << a[0] << endl;
    cout << "a[1] 的值是: " << a[1] << endl;
    cout << endl << "-------------------------------------" << endl;

    p = a;

    cout << endl << "-------------------------------------" << endl;
    cout << "指针 p 的值是: " << p << endl;
    cout << "指针 p 的地址是: " << &p << endl;
    cout << "指针 p 指向的值是: " << *p << endl;
    cout << "指针 p + 1 的值是: " << *p + 1 << endl;
    cout << "指针 p - 1 的值是: " << *p - 1 << endl;
    cout << "指针 p[-1] 的值是: " << p[-1] << endl;
    cout << "指针 p[0] 的值是: " << p[0] << endl;
    cout << "指针 p[1] 的值是: " << p[1] << endl;
    cout << endl << "-------------------------------------" << endl;

    return 0;
}
