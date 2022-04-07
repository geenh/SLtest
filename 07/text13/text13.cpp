#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int & ra = a;
	int b = 2;
	ra = b;
	cout<<a<<endl;
	cout<<*( & ra )<< endl;
	return 0;
}