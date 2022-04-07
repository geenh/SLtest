#include<iostream>
using namespace std;
void print(const char *name[], int n);
int main()
{
	const char* str[5] = { "mingri","soft","C++","MR","Book" };
	int n = 5;
	print(str,n);
	return 0;
}
void print(char *name[], int n)
{
	int i = 0;
	char *p = name[0];
	while (i < n)
	{
		p = *(name + i);
		i++;
		cout << p << endl;
	}
}