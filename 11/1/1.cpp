#include<iostream>
using namespace std;
class CEmployee
{
public:
	int m_ID;
	char m_Name[20];
	char m_Depart[128];

	void OutPut()
	{
		cout<<"员工姓名："<<m_Name << endl;

	}
};

class COperator:public CEmployee
{
public:
	char m_password[128];
	bool Login()
	{
		if (strcmp(m_Name, "MR") == 0 && strcmp(m_password, "KJ"))
		{
			cout<<"登录成功！" << endl;
			return true;
		}
		else
		{
			cout<<"登录失败！" << endl;
			return false;
		}
	}

};

int main()
{
	COperator op;

	strcpy(op.m_Name,"MR");
	strcpy(op.m_password, "KJ");
	op.Login();
	op.OutPut();
	return 0;
}