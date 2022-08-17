#include<iostream>
using namespace std;

class Rectangle
{
public:
	inline void SetValue(double width, double height);
	inline double GetArea();
	inline void GetThis();
private:
	double width;
	double height;

};

void Rectangle::SetValue(double width, double height)
{
	this->width = width;
	this->height = height;

}

double Rectangle::GetArea()
{
	return width * height;

}
void Rectangle::GetThis()
{
	cout<<"this指针保存的地址值："<<this << endl;

}

int main()
{
	Rectangle r1, r2;
	r1.SetValue(5, 6);
	cout<<"矩形1的地址："<<&r1 << endl;
	r1.GetThis();
	cout<<"面积：" << r1.GetArea() << endl;

	r2.SetValue(4, 6.5);
	cout << "矩形2的地址：" << &r2 << endl;
	r2.GetThis();
	cout << "面积：" << r2.GetArea() << endl;
	return 0;
}