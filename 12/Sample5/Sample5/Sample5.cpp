#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
template<class T1, class T2,int num=10>
class MyTemplate
{
	T1 t1;
	T2 t2;
public:
	MyTemplate(T1 tt1, T2 tt2)
	{
		t1 = tt1+num, t2 = tt2+num;
	}
	void display()
	{
		cout << t1 << " " << t2 << endl;
	}
};
int main()
{
	int a = 100;
	float b = 123.45f;
	MyTemplate<int, float, 20> ta(a, b);
	ta.display();

	MyTemplate<int, float> tb(a, b);
	tb.display();
}