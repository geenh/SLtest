#include<iostream>
#include"stdlib.h"
#include"stdio.h"
using namespace std;

class A {
public:
	virtual void print()
	{
		cout<<"A:print()" << endl;
	}
};
class B :public A
{
public:
	virtual void print()
	{
		cout<<"B::print()" << endl;
	}
};
int main()
{
	A a;
	B b;
	cout<<sizeof(A)<< endl;
	cout << sizeof(B) << endl;
	a.print();
	b.print();

	A* ptr_a = &b;
	ptr_a->print();
	return 0;
}