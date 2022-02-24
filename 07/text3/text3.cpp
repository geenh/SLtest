#include<iostream>
using namespace std;

int main()
{
	char name[20] = "jake";
	char word[20] = { 'h','e','l','l','o','\0','j','a','c','k' };
	char sname[80][20] = { "jack","lucy","jim" };
	cout<<name<<endl;
	cout << word << endl;
	for (int i = 0; i < 3; i++)
	{
		cout<<sname[i] << endl;
	}
	return 0;
}