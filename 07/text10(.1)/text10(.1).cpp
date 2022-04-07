#include<iostream>
using namespace std;

int avg(int, int);
int main()
{
	int i = 5;
	int j = 6;
	int result;
	int (*pfun)(int, int);
	pfun = avg;
	result=(*pfun)(i, j);
	cout << result << endl;
	return 0;
}
int avg(int a, int b)
{
	return (a + b) / 2;
}