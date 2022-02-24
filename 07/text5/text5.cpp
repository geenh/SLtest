#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* pa = &a;
	cout << pa << endl;
	pa = &b;
	cout << pa << endl;
	cout << &c << endl;
	cout << *pa << endl;
	/*int* pa;
	*pa = 100; //错误用法
	*/
}