#include<iostream>
#include"rectangle.h"
using namespace std;

int main()
{
	Rect r1;
	r1.SetValue(5, 6);
	cout<<"r1:"<<r1.GetArea() << endl;
	cout << r1.GetHeight() << endl;
	cout << r1.GetWidth() << endl;
	Rect r2,r3;
	r2.SetValue(1, 2);
	cout << "r2:" << r2.GetArea() << endl;
	cout << r2.GetHeight() << endl;
	cout << r2.GetWidth() << endl;

	r3.SetValue(3, 4);
	cout << "r3:" << r3.GetArea() << endl;
	cout << r3.GetHeight() << endl;
	cout << r3.GetWidth() << endl;
	return 0;
}