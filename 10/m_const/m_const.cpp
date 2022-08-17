#include<iostream>
using namespace std;



class Timer
{
public:
	Timer(int hour = 0, int minute = 0, int second = 0)
	{
		m_hour = hour;
		m_minute = minute;
		m_second = second;

	}
	int GetHour()const { return m_hour; }
	int GetMinute()const { return m_minute; }
	int GetSecond()const { return m_second; }
	friend bool isEqual(Timer& t1, Timer& t2);

private:

	int m_hour;
	int m_minute;
	int m_second;

};


int main()
{
	Timer t0(1, 10, 20);
	Timer t1(3, 20, 15);
	Timer t2(1, 10, 20);
	cout << "t0和t1是";

	if(isEqual(t0,t1))
		cout << "同一时刻" << endl;
	else
		cout << "不同时刻" << endl;

	cout << "t0和t2是";

	if (isEqual(t0, t2))
		cout << "同一时刻" << endl;
	else
		cout << "不同时刻" << endl;
		return 0;
}
bool isEqual(Timer& t1, Timer& t2)
{
	if (t1.GetHour() == t2.GetHour() && t1.GetMinute() == t2.GetMinute() && t1.GetSecond() == t2.GetSecond())
		return true;
	else
		return false;

}