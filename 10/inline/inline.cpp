#include<iostream>
using namespace std;
class Rectangle
{
public:
	inline void SetValue(double width, double height);
	inline double GetArea();
private:
	double m_width;
	double m_height;



};
void Rectangle::SetValue(double width, double height)
{
	m_width = width;
	m_height = height;
}
double Rectangle::GetArea()
{
	return m_width * m_height;
}
int main()
{
	Rectangle r1;
	r1.SetValue(5,6);
	cout<<r1.GetArea() << endl;


	return 0;
}