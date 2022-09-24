#include<iostream>
using namespace std;

class Date
{
public:
	Date()
	{
		cout<<"Date()" << endl;
	}
	~Date()
	{
		cout<<"~Date()" << endl;
	}

};
class Farmer
{
public:
	Farmer()
	{
		cout<<"Farmer()" << endl;
	}
	~Farmer()
	{
		cout<<"~Farmer()" << endl;
	}
	void Sow()
	{
		cout<<"播种" << endl;
	}
};

class Worker
{
public:
	Worker()
	{
		cout<<"Worker()" << endl;
	}
	~Worker()
	{
		cout<<"~Worker()" << endl;
	}
	void Work()
	{
		cout<<"工作" << endl;
	}
};

class FarmerWorker :public Farmer, public Worker
{
public:
	FarmerWorker()
	{
		cout<<"FarmerWorker()" << endl;
	}
	~FarmerWorker()
	{
		cout<<"~FarmerWorker()" << endl;
	}
	Date d1;
	Date d2;
};
int main()
{
	FarmerWorker fm;
	fm.Sow();
	fm.Work();
	return 0;
}