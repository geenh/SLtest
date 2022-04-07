#include<iostream>
using namespace std;
char* str(char*);
int main()
{
	char name[100] = { '\0' };
	cout<<"请输入会员名：" << endl;
	
	gets_s(name);
	char* newstr;
	newstr = str(name);
	cout << newstr << endl;
	cout<< "尊敬的会员" << endl;
	cout << "，恭喜你获得价值600元的学习礼包" << endl;
	return 0;
}