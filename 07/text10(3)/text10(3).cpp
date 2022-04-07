#include<iostream>
using namespace std;
int max(int a[], int n);

int main()
{
	int a[10] = { 66,77,88,99 };
	int b[10] = { 90,100,56,43,2,89 };
	cout<<"a数组中最大值是："<<max(a,4) << endl;
	cout << "b数组中最大值是：" << max(b, 6) << endl;
	return 0;
}
int max(int a[], int n)
{
	int maxvalue;
	maxvalue = a[0];
	for (int i = 1;i < n; i++)
	{
		if (a[i] > maxvalue)
			maxvalue = a[i];
	 
	}
	return maxvalue;
}