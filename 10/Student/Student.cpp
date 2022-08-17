#include<iostream>
using namespace std;
#pragma warning(disable:4996)
void OutPut();

class Student
{
public:
	
	Student():age(0)
	{
	strcpy(name,"无名");
	cout<<name<<":默认构造函数被执行" << endl;

	}
	Student(const char* sname, int sage)
	{
		strcpy(name, sname);
		age = sage;
		cout<<name<<":带参构造函数被执行" << endl;
	}
	~Student()
	{
		cout<<name<<"：析构函数被执行" << endl;

	}
	void Display();
private:
	char name[20];
	int age;
}student("Jack",23);
void Student::Display()
{
	cout<<"姓名："<<name<<"   "<<"年龄："<<age<<endl;

}
void OutPut()
{
	static Student stu;

}
int main()
{
	Student s1("ucy", 22);
	Student s2("Lily", 22);
	OutPut();
	cout<<"exit main..." << endl;
	
	return 0;
}


