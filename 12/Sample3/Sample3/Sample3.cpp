#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
template<class T1,class T2>
class MyTemplate
{
	T1 t1;
	T2 t2;
public:
	MyTemplate(T1 tt1,T2 tt2)
	{
		t1 = tt1, t2 = tt2;

	}
	void display()
	{
		cout<<t1<<" "<<t2 << endl;
	}
};
int main()
{
	MyTemplate<int, float> a(100, 123.45);

	a.display();
}