#include<iostream>
using namespace std;
typedef char* CString;
int main()
{
	CString str;
	char temp[] = "Hello World";
	str = temp;
	cout<<str<<endl;
	return 0;
}