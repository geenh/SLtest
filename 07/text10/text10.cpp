#include<iostream>
using namespace std;

char* str(char * name);
int main()
{
	char name[100] = { '\0' };
	cout<<"请输入会员名：" << endl;
	gets_s(name);
	char* newstr;
	newstr = str(name);
	cout<<newstr<<endl;
	free(newstr);
	newstr = 0; 
	return 0;
}
char* str(char* name)
{
	const char *p1 = "尊敬的会员";
	const char *p2 = ",恭喜您获得价值500元的学习礼包";
	char *result = (char*)malloc(100);
	char* r = result;
	//拼接p1
	while (*p1)
		*r++ = *p1++;
	while (*name)
		*r++ = *name++;
	while (*p2)
		*r++ = *p2++;
	*r = '\0';
	return result;
}