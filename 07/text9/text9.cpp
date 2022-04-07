#include<iostream>
using namespace std;

int main()
{
	char msg[100] = "大家好，很高兴见到各位";
	char* cp = 0;
	int i;
	cout<<"指针访问，指针表示："<<endl;
	for (cp = msg; *cp != '\0'; cp++)
	{
		cout << *cp;
	}
	cout <<endl;
	cout << "下标访问，下标表示：" << endl;
	for (i=0;msg[i];i++)
	{
		cout << msg[i];
	}
	cout << endl;
	cout << "下标访问，指针表示：" << endl;
	for (i = 0; *(msg+i); i++)
	{
		cout << * (msg + i);
	}
	cout << endl;
	return 0;
}