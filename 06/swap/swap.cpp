#include <iostream>
using namespace std;
int swap(int a, int b);
int main()
{
	int x = 3, y = 6;
	cout << "交换前，形参x和y的值是" << x << " " << y << endl;
	swap(x, y);
	cout << "交换后，形参x和y的值是" << x << " " << y << endl;
}

int swap(int a, int b)
{
	int tmp;
	cout << "交换前，形参a和b的值是" << a << " " << b << endl;
	tmp = a;
	a = b;
	b = tmp;
	cout << "交换后，形参a和b的值是" << a << " " << b << endl;
}