#include<iostream>
using namespace std;
class Timer;
class TimerFriend
{
public:
	void PrintTimer(Timer& t);
	void ModifyTimer(Timer& t);



};
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
	friend void TimerFriend::PrintTimer(Timer& t);
	friend void TimerFriend::ModifyTimer(Timer& t);

private:

	int m_hour;
	int m_minute;
	int m_second;

};

void TimerFriend::PrintTimer(Timer& t)
{
	cout<<t.m_hour<<":"<<t.m_minute<<":"<<t.m_second << endl;

}

void TimerFriend::ModifyTimer(Timer& t)
{
	cout<<"请输入新的时，分，秒（用空格区分）" << endl;
	cin>>t.m_hour>>t.m_minute>>t.m_second;
	cout<<"修改完毕!" << endl;

}
int main()
{
	Timer t0(1, 10, 20);
	TimerFriend tf;
	tf.PrintTimer(t0);
	tf.ModifyTimer(t0);
	tf.PrintTimer(t0);

	return 0;
}