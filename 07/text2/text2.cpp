#include<iostream>
using namespace std;

int main()
{
	int a[3][3] = { {9,6,3},{5,7,10} ,{1,2,4} };
	int tmp, i, j;
	int max=a[0][0], min=a[0][0];
	cout<<"转换前：" << endl;
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout<<a[i][j] << "  ";
		}
		cout << endl;
	}
	cout<<"转换后：" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i; j++)
		{
			tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
		}
		
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << "  ";
			if (a[i][j] > max)
				max = a[i][j];
			if (a[i][j] <min)
				min = a[i][j];

		}
		cout << endl;
	}
	cout<<"最大值：" << max<<endl;
	cout << "最小值：" << min << endl;
	return 0;
}