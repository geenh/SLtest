#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

template<class type,int len>
type Max(type array[len])
{
	type ret = array[0];
	for (int i = 1; i < len; i++)
	{
		ret = (ret > array[i]) ? ret : array[i];
	}
	return ret;

}
int main()
{
	int array[5] = { 1,2,3,4,5 };
	int iret = Max<int, 5>(array);
	double dset[3] = { 10.5,11.2,9.8 };
	double dret = Max<double, 3>(dset);
	cout<<dret<<endl;
}