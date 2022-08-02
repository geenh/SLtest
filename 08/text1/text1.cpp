#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

struct Cat
{
	char name[20];
	char sex;
	int age;
	double weight;

};
int main()
{
	Cat kitty = { "kitty",'F',2,4 };

	Cat* cat = &kitty;
	cout << "猫名：" << kitty.name << endl;
	cout<<kitty.sex<<endl;

	cout << (*cat).age << endl;
	cout << cat->weight << endl;
	Cat cat2 = kitty;
	cout << cat2.name << endl;
	cout << cat2.weight << endl;

	Cat lanMao;
	strcpy(lanMao.name, "蓝猫");
	lanMao.sex = 'M';
	lanMao.age = 2;
	lanMao.weight = 5;
	return 0;
}