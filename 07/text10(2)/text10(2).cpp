#include<iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int x = 5;
	int y = 6;
	cout << "交换前：" << endl;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	swap(&x, &y);
	cout << "交换后：" << endl;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	return 0;
}
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}