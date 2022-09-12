#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Date
{
public:
	Date(int year=2000,int month=1,int day=1):m_year(year),m_month(month),m_day(day){ }
	void PrintDate()
	{
		cout<<m_year<<"-"<<m_month<<"-"<<m_day << endl;
	}
private:
	int m_year;
	int m_month;
	int m_day;
};

class CEmployee
{
public:
	CEmployee(int id, const char* name, const char* depart)
	{
		m_ID = id;
		strcpy(m_Name, name);
		strcpy(m_Depart, depart);
	}
	void OutPut()
	{
		cout<<"ID:"<<m_ID<<endl;
		cout<<"Name:"<<m_Name<<endl;
		cout<<"Depart:"<<m_Depart<<endl;
	}
protected:
	int m_ID;
	char m_Name[128];
	char m_Depart[128];

};

class COperator :public CEmployee
{
public:
	COperator(int id, const char* name, const char* depart, int year, int month, int day, const char* password) :CEmployee(id, name, depart), logtime(year, month, day)
	{
		strcpy(m_password,password);
		
	}
	void Print()
	{
		OutPut();
		cout<<"Password:" <<m_password<< endl;
		cout << "logTime:" ;
		logtime.PrintDate();

	}
private:
	char m_password[128];
	Date logtime;

};
int main()
{
	COperator oper(1,"MR","MRKJ",2015,10,10,"123456");
	oper.Print();

	return 0;
}