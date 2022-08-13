#include<iostream>
using namespace std;
#pragma warning(disable : 4996)
class Cat
{
	public:
		Cat();
		Cat(const char * sname,int sage=3);
		Cat(const Cat & copycat);
		void Shout()
		{
			cout<<"我是"<<name<<"喵喵喵" << endl;
			cout << "喵龄：" << age << endl;
		}
		void SetName(const char * sname)
		{
			strcpy(name,sname);
		}
private:
	char name[20];
	int age;
};
Cat::Cat()
{
	strcpy(name,"无名");
	age = 0;
}
Cat::Cat(const char * sname,int sage)
{
	strcpy(name, sname);
	age = sage;
	
}
Cat::Cat(const Cat & copycat)
{
	strcpy(name,copycat.name);
	age = copycat.age;
}
int main()
{
	Cat cat("kitty");
	Cat kitty("花花",2);
	Cat cat2(kitty);
	//cat.SetName("kitty");
	cat.Shout();
	kitty.Shout();
	cat2.Shout();
	return 0;
}
