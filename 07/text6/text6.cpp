#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int* max = &a;
	int* min = &b;
	if (a < b)
	{
		int* tmp = 0;
		tmp = max;
		max = min;
		min = tmp;
	}
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << *max << endl;
	cout << *min << endl;
	return 0;
}
