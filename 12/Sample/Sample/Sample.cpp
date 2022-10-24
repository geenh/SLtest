#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

template <class type>
type Sum(type a, type b)
{
	return a + b;

}

int main()
{
	cout<<Sum(1,2) << endl; 
	
	cout<<Sum(1.1f,2.2f) << endl;
	
	
}