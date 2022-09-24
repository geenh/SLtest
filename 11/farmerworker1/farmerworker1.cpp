#include<iostream>
using namespace std;
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
	
	void eat()
	{
		cout<<"Farmer::eat()" << endl;
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
	void eat()
	{
		cout<<"Worker::eat()" << endl;
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
	void eat()
	{
		Worker::eat();
	}
};
int main()
{
	FarmerWorker fm;
	cout << endl;
	fm.Farmer::eat();
	fm.eat();
	cout << endl;
	return 0;
}