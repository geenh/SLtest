#include<iostream>
using namespace std;
int main()
{
	int i;
	int strength = 20;
	for (i = 8; i > 0; i--)
	{
		cout<<"吃包子" << endl;
		strength += 10;
	}
	cout<< strength 
		<<endl;
}