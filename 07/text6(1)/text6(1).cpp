#include<iostream>
using namespace std;

int main()
{
	int i = 5;
	double j = 6;
	int* pi = &i;
	double* pj = &j;
	cout<<"int变量" << endl;
	cout<<pi<<endl;
	cout<<"地址自增" << endl;
	pi++;
	cout<<pi<<endl;
	cout << "地址自减" << endl;
	pi--;
	cout << endl;
	cout<<"double变量" << endl;
	cout << pj << endl;
	cout << "地址自增" << endl;
	pj++;
	cout << pj << endl;
	cout << "地址自减" << endl;
	pj--;
	cout << pj << endl;


	return 0;
}