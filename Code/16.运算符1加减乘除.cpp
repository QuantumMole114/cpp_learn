#include <iostream>
using namespace std;

int main()
{
    // 加减乘除
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl; // 两个整数相除结果依然是整数，小数部分省略

    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl; // 会输出0而不是0.5

    /*
    int a3 = 10;
    int b3 = 0;
    cout << a3 /b3 << endl; //除数不能为0
    */

    double d1 = 0.5;
    double d2 = 0.22;
    cout << d1 / d2 << endl;

    return 0;
}