#include <iostream>
using namespace std;
void move(int n, char x, char y, char z);
int main()
{
	int n;
	cin >> n;
	move(n,'A','B','C');
}
void move(int n, char x, char y, char z)
{
	if (n == 1)
		cout << x<<"->" << z << endl;
	else
	{
		move(n - 1, x, z, y);
		cout << x << "->" << z << endl;
		move(n - 1, y, x, z);
	}
}