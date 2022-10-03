#include <iostream>
using namespace std;

double exchange(double from, double proportion);

int main()
{
    double from;
    double proportion = 20.3;
    cout << "请输入人民币金额: ";
    cin >> from;
    cout << from << " 元人民币能换成: " << exchange(from, proportion) << "日元." << endl;
}

double exchange(double from, double proportion)
{
    return from * proportion;
}