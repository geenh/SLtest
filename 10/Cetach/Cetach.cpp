#include<iostream>

using namespace std;
namespace OutPut
{
	void Show()
	{
		cout<<"OutPut's function!" << endl;

	}

}
namespace MyName
{
	void Demo()
	{
		cout<<"MyName's function!" << endl;

	}
}
int main()
{
	OutPut::Show();
	MyName::Demo();

	return 0;
}