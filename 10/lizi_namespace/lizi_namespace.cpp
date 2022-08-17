#include<iostream>
using namespace std;
namespace MyName1
{
	int iValue = 10;
}
namespace MyName2
{
	int iValue = 20;

}
int iValue = 30;

int main()
{
	cout<<MyName1::iValue<<endl;
	cout<<MyName2::iValue<<endl;
	cout << iValue<<endl;
	return 0;
}