#include<iostream>
using namespace std;
int add(int x, int y);
double add(double x, double y);

int main()
{
	cout << add(2, 3) << endl;
	cout << add(3.1,4.1 ) << endl;
}
int add(int x, int y)
{
	cout<<"add int" << endl;
	return x + y;
}
double add(double x, double y)
{
	cout << "add double" << endl;
	return x + y;
}