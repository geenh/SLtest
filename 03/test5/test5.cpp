#include <iostream>
using namespace std;
int main()
{
    cout << "输入性别和购物金额，f--女,m--男" << endl;
    char ch;
    double money;
    cin >> ch >> money;
    if ((ch=='f'&&money>=50||(ch=='m'&&money>=200)))
        cout << "获得香水" << endl;
    else
        cout<<"没有" << endl;
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

