#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int num = 0, i,j;
    char c;
    cout << "请输入一个字符串:"<<endl;
    gets_s(str);
    for  (i = 0;str[i]!='\0'; i++)
    {
        num++;
    }
    for (i = 0, j = num - 1; i < j; i++, j--)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    cout<<str<<endl;
    return 0;
}
