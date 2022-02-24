#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int strength = 20;

	cout<<"break:" << endl;
	for (i = 1; i <= 8; i++)
	{
		if (i == 5)
		{
			cout << "是素包子" << endl;
			break;
		}
		cout << "吃牛肉包子" << endl;
		strength += 10;
	}
	cout << "体力值：" << strength << endl;
	cout << endl;
	cout << "continue:" << endl;
	strength = 20;
	for (i = 1; i <= 8; i++)
	{
		if (i == 5)
		{
			cout << "是素包子" << endl;
			continue;
		}
		cout << "吃牛肉包子" << endl;
		strength += 10;
	}
	cout << "体力值：" << strength << endl;
	return 0;
}