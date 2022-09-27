#include<iostream>
using namespace std;
class Human
{
public:

	Human()
	{
		cout<<"Human()" << endl;
     }
	~Human()
	{
		cout<<"~Human()" << endl;
	}
	void eat()
	{
		cout<<"Human::eat()" << endl;
	}
};

class Farmer :public Human
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
class Worker :public Human
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
		cout << "工作" << endl;
	
	}
};

class FarmerWorker :public Farmer, public Worker
{
public:
	FarmerWorker()
	{
		cout << "FarmerWorker()" << endl;
	}

	~FarmerWorker()
	{
		cout << "~FarmerWorker()" << endl;
	}
};
int main()
{
	FarmerWorker fm;
	cout << endl;
	fm.Farmer::eat();
	fm.Worker::eat();
	return 0;
}