#include<iostream>
#include"stdlib.h"
#include"stdio.h"

using namespace std;
class CAnimal
{
public:
	CAnimal()
	{
		cout<<"动物类被构造" << endl;
	}
	void Move()
	{
		cout<<"动物能够移动" << endl;
	}
};

class CBird :virtual public CAnimal
{
public:
	CBird()
	{
		cout<<"鸟类被构造" << endl;
	}
	void FlyInSky()
	{
		cout<<"鸟能够在天空飞翔" << endl;
	}
	void Breath()
	{
		cout<<"鸟能够呼吸" << endl;
	}
};
class CFish :virtual public CAnimal
{
public:
	CFish()
	{
		cout<<"鱼类被构造" << endl;
	}
	void SwimInWater()
	{
		cout<<"鱼能够在水里游" << endl;
	}
	void Breath()
	{
		cout<<"鱼能够呼吸" << endl;
	}
};
class CWaterBird :public CBird, public CFish
{
public:
	CWaterBird()
	{
		cout<<"水鸟类被构造" << endl;
	}
	void Action()
	{
		cout<<"水鸟既能飞又能游" << endl;
	}

};
int main()
{
	CWaterBird waterbird;
	return 0;
}