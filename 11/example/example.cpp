#include<iostream>
using namespace std;
class CEmployee
{
	public:
		char* GetDepart()
		{
			return m_Depart;
		}
public:
	int m_iD;
protected:
	char m_Name[128];
private:
	char m_Depart[128];
};

class COperator :public CEmployee
{
public:
	void SetInfor(int id, const char* name, const char* depart, const char* pwd)
	{
		m_iD = id;
		strcpy(m_Name, name);
		strcpy(GetDepart(), depart);
		strcpy(m_Password, pwd);
	}
	void Print()
	{
		cout<<"ID:" << m_iD << endl;
		cout << "Name:" << m_Name << endl;
		cout << "Depart:" << GetDepart() << endl;
		cout << "Password:" << m_Password << endl;
	}

private:
	char m_Password[128];
};
int main()
{
	COperator oper;
	oper.SetInfor(1, "MR", "MRKJ", "123456");
	oper.Print();

	return 0;
}