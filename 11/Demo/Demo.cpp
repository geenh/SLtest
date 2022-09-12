#include<iostream>
using namespace std;

class Base
{
public:
	Base(int i)
	{
		m_i = i;
		cout<<"Base()" << endl;
	}
	~Base()
	{
		cout << "~Base()" << endl;
	}
private:
	int m_i;
};
class Derived :public Base
{
public:
	Derived(int i) :Base(i)
	{
		cout<<"Derived()" << endl;
	}
	~Derived()
	{
		cout << "~Derived()" << endl;
	}
};
int main()
{
	Derived d(5);
	return 0;
}