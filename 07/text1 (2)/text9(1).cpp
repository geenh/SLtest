#include<iostream>
using namespace std;

int main()
{
	int score[100];
	int num;//人数
	int sum = 0;//总分
	double ave = 0.0;//平均分
	int count = 0;//优秀成绩人数
	int i;
	cout<<"请输入学生人数:" << endl;
	cin >> num;
	cout << "请输入"<<num<<" 个学生成绩:" << endl;

	for (i = 0; i < num; i++)
	{
		cin >> score[i];
		sum += score[i];
	}
	ave =(double) sum / num;
	cout<<"成绩是：" << endl;
	for (i = 0; i < num; i++)
	{
		cout << score[i]<<"  ";
		if (score[i]>=90)
		{
			count++;
		}
	}
	cout << "平均成绩是：" <<ave<< endl;
	cout << "优秀成绩人数：" << count << endl;
	cout << endl;
	getchar();
	getchar();
		return 0;
}