#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Book
{
public:
	Book(const char* sname, const char* sauthor, double sprice);
	const char* GetName() { return name; }
	const char* GetAuthor() { return author; }
	double GetPrice() { return price; }
	void Display()
	{
		cout << "书名：" << name << "作者：" << author << "价格：" << price << endl;
	}
private:
	char name[50];
	char author[20];
	double price;

};

Book::Book(const char* sname, const char* sauthor, double sprice)
{
	strcpy(name, sname);
	strcpy(author, sauthor);
	price = sprice;
}
    
class OverLoad
{
public:
	bool IsEqual(int a,int b);
	bool IsEqual(Book & a,Book & b);

};

bool OverLoad::IsEqual(int a, int b)
{
	if (a == b)
		return true;
	else
		return false;

}

bool OverLoad::IsEqual(Book& a, Book& b)
{
	if (strcmp(a.GetName(), b.GetName()) == 0 && strcmp(a.GetAuthor(), b.GetAuthor()) == 0 && (a.GetPrice() == b.GetPrice()))
		return true;
	else
		return false;

}

int main()
{
	Book b1("C++从入门到精通", "明日科技", "59.8");
	Book b2("Java从入门到精通", "明日科技", "59.8");
	int a = 5;
	int b = 5;
	OverLoad ol;
	if (ol.IsEqual(a, b))
		cout << a << "=" << b << endl;
	if (ol.IsEqual(b1, b2))
		cout << "两本书相同" << endl;
	else
	{
		b1.Display();
		b2.Display();
	}

	return 0;
}