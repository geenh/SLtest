#include<iostream>
using namespace std;
int main()
{
	char input;
	cin >> input;
	switch (input)
	{
	case 'A':
		cout<<"Excellent(优秀)" << endl;
		break;
	case 'B':
		cout<<"Good(良好)" << endl;
		break;
	case'C':
		cout<<"Pass(一般)" << endl;
		break;
	case'D':
		cout<<"Fail(差)" << endl;
		break;
	default:
		cout<<"input error" << endl;
		break;
	}
}