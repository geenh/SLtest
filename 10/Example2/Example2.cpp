#include<iostream>
using namespace std;
#pragma warning(disable : 4996)
class Example
{
public:
	Example()
	{
		m_message = new char[100];
		cout << "构造函数被执行！" << endl;
	}

	~Example()
	{
		delete[]m_message;
		cout << "析构函数被执行！" << endl;
	}
	void Showmessage()
	{
		strcpy(m_message, "One World One Dream");
		cout << m_message << endl;
	}
	char* m_message;

};
int main()
{

	Example e;
	e.Showmessage();

	return 0;
}