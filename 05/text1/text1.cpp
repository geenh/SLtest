#include<iostream>
using namespace std;
int main()
{
	int strength = 20;
	int i = 8;
	while (i > 0)
	{
		cout<<"吃包子" << endl;
		i--;
		strength += 10;

	}
	cout<<"体力值：" <<strength<< endl;
	cout <<"包子数：" <<i<< endl;
}