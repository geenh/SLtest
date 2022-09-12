#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1) :m_year(year), m_month(month), m_day(day)
	{
		cout<<"Date()" << endl;
	}
	void PrintDate()
	{
		cout<<m_year<<"-"<<m_month<<"-"<<m_day << endl;
	}
	~Date()
	{
		cout<<"Date()" << endl;
	}
private:
	int m_year;
	int m_month;
	int m_day;
};

class CEployee
{
public:
	CEployee(int id, const char* name, const char* depart)
	{
		m_ID = id;
		strcpy(m_Name, name);
		strcpy(m_Depart, depart);
		cout<<"CEmployee()" << endl;
	}
	void OutPut()
	{
		cout<<"ID:"<<m_ID<<endl;
		cout<<"Name():"<<m_Name<<endl;
		cout << "Depart():" << m_Depart << endl;
	}
	~CEployee()
	{
		cout<<"~CEployee()" << endl;

	}
protected:
	int m_ID;
	char m_Name[128];
	char m_Depart[128];
};

class COperator :public CEployee
{
public:
	COperator(int id, const char* name, const char* depart, int year, int month, int day, const char* pwd)\
		: CEployee(id, name, depart), logTime(year, month, day)
	{
		m_ID = id;
		strcpy(m_Name, name);
		strcpy(m_Depart, depart);
		strcpy(m_Password, pwd);
		cout << "COperator()" << endl;
	}
		void Print()
		{
			OutPut();
			cout<<"Password:"<<m_Password << endl;
			cout << "Logintime:";
			logTime.PrintDate();
		}
private:
	char m_Password[128];
	Date logTime;

};
int main()
{
	COperator oper(1, "MR", "MRKJ", 2015, 10, 10, "123456");
	cout << endl;
	oper.Print();
	cout << endl;
	return 0;
}