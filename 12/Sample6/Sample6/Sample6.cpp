#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<assert.h>
using namespace std;

template<class T, int b>
class Array
{
	T elem[b];
public:
	Array(){}
	T& operator[](int sub)
	{
		assert(sub >= 0 && sub < b);
		return elem[sub];
	}
};
int main()
{
	Array<int, 10> array;
	array[0]=0;
	

}