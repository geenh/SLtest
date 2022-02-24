#include<iostream>
using namespace std;
double makechange(double a, double b, double c);
int main()
{
	double x, y, z,change;
	cout<<"请输入购买量，支付金额,瓜的单价 " << endl;
	cin >> x >> y >> z;
	change = makechange(x, y, z);
	cout << change << endl;

}
double makechange(double a, double b, double c)
{
	double change = b - a * c;
	return change;
}