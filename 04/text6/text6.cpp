#include<iostream>
using namespace std;
int main()
{

	int  year;
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "是闰年" << endl;
			}
			else
			{
				cout << "不是闰年" << endl;
			}
		}
		else
		{
			cout << "是闰年" << endl;
		}
	}
	else
	{
		cout << "不是闰年" << endl;
	}
}