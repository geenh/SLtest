#include<iostream>
#include<string>


using namespace std;
template<class type>
type min(type a,type b)
{
	if (a < b)
		return a;
	else
		return b;

}
const char* min(const char* a, const char* b)
{
	if (strcmp(a, b) > 0)
		return b;
	else
		return a;
	
}
int main()
{
	cout<<::min(1,2) << endl;
	cout<<::min(1.5,2.3)  << endl;
	const char* pa = "aaa";
	const char* pb = "bbb";
	cout<<::min(pa,pb) << endl;
	return 0;
}