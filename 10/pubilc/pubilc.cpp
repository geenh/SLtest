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
class Student :public Person
{

public:
	void stu_display()
	{
		cout<<"名字：" <<"  " << name << "年龄：" << age << endl;
	}

};
int main()
{
	
	Person p2("Lucy",20);

	
	p2.display();
	Student s;
	s.stu_display();
	return 0;
}