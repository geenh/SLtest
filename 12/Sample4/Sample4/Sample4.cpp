#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;

template<class T1,class T2=int>
class MyTemplate
{
	T1 t1;
	T2 t2;
public:
	MyTemplate(T1 tt1, T2 tt2)
	{
		t1 = tt1;
		t2 = tt2;
	}
	void display()
	{
		cout<<t1<<" "<<t2 << endl;
	}
};

int main()
{
	int a = 100;
	float b = 123.45f;

	MyTemplate<int, float> ta(a, b);
	ta.display();

	MyTemplate<int       > tb(a, b);
	tb.display();
}