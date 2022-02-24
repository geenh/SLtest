#include<iostream>
using namespace std;
int main()
{
	int num = 2;
	do
	{
		int i = 1;
		int sum = 0;
		while (i < num / 2 + 1)
		{
			if (num % i == 0)
				sum += i;
				i++;
		}
		if (num == sum)
		{
			cout << num <<"因子是：" << endl;
			int j = 1;
			while (j < num / 2 + 1)
			{
				if (num % j == 0)
					cout << j << ",";
				j++;
			}
			cout << endl;
		}
		num++;
	} while (num <= 1000);

	return 0;
}