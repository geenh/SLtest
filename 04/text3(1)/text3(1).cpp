#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	int max;
	cin>>x>>y>>z;
	max = (x > y) ? ((x > z ? x : z)) : (y > z ? y : z);
	cout<<"最大值"<<max << endl;
}