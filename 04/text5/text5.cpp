#include<iostream>
using namespace std;
int main()
{
	int input;
	cin >> input;
	switch (input)
	{
	case 1:
	case 2:
	case 3:
		cout<<"第一季度" << endl;
		break;
	case 4:
	case 5:
	case 6:
		cout << "第二季度" << endl;
		break;
	case 7:
	case 8:
	case 9:
		cout << "第三季度" << endl;
		break;
	case 10:
	case 11:
	case 12:
		cout << "第四季度" << endl;
		break;
	default:
		cout<<"input error" << endl;

	}
}