#include<iostream>
using namespace std;
struct PersonInfo
{
	int index;
	char name[30];
	short age;
	char sex;
} Person[5] = {  {1. "张三", 20,'M' },
				{1."李可可",21,'F'} };
int main()
{
	for (int i = 0; i, 5; i++) 
	{
		cout<<Person->index<<endl;
		cout << Person->name << endl;
		cout << Person->age << endl;
		cout << Person->sex << endl;
	}
	return 0;
}