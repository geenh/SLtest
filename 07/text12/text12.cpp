#include<iostream>
using namespace std;

int main()
{
	int* pp[3];
	int a = 1;
	int b = 2;
	int c = 3;
	pp[0] = &a;
	pp[1] = &b;
	pp[2] = &c;
	int** q = pp;
	cout<<*( * q )<< endl;
	q++;
	cout << *(*q) << endl;
	return 0;
}