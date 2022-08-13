#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Person
{
public:
	
	Person() :age(0)
	{
		strcpy(name,"无名");
	}
	Person(const char* sname, int sage)
	{
		strcpy(name, sname);
		age = sage;
	};
	void display()
	{
		cout<<"姓名：" <<name<<"  " << "年龄：" << age << endl;
	}
protected:
	char name[20];
	int age;
	void OutPut()
	{
		cout<<"output保护函数被调用！" << endl;
	}

};
int main()
{
	Person p1;
	Person p2("Lucy",20);
	//cout<<p1.name<<"  "<<p1.age << endl;
	//p2.OutPut();
	p1.display();
	p2.display();
	return 0;
}