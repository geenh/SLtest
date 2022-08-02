#include<iostream>
#include<string>
using namespace std;

struct Hobby
{
	char food[20];
	double hours;
};
struct Cat
{
	char name[20];
	char sex;
	Hobby care;
};
int main()
{
	Cat cat1 = { "花花",'F',{"鱼肉和牛肉",1.5} };
	cout << cat1.name << endl;
	cout << cat1.sex << endl;
	cout << cat1.care.food << endl;
	cout << cat1.care.hours << endl;
	return 0;
}