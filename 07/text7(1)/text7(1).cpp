#include<iostream>
using namespace std;

int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int* pa = &a[0][0];
	int b[12] = { 0 };
	for (int i = 0; i < 12; i++)
	{
		b[i] = *pa++;
		cout << b[i] << "  ";
	}
}