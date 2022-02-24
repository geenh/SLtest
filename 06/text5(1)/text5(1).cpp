#include<iostream>
using namespace std;
int iTotalCount;
int GetCount();
int main()
{
	int iTotalCount = 100;
	cout << iTotalCount << endl;
	cout << GetCount() << endl;

}
int GetCount()
{
	iTotalCount = 200;
	return iTotalCount;
}