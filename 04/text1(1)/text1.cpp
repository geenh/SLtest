#include <iostream>
using namespace std;
int main()
{
	
		cout << "�����е�Ǯ����w��" << endl;
		int input;
		cin >> input;
		if (input >= 500)
		{
			cout << "����������" << endl;

		}
		else if (input >= 200 && input <= 500)
		{
			cout << "����" << endl;
		}
		else if (input >= 50 && input <= 200)
		{
			cout << "����" << endl;
		}
		else if (input >= 1 && input <= 50)
		{
			cout << "��µ�" << endl;
		}
		else
		{
			for (int i = 0; i <= 10000000; i++)
			{
				cout << "�ٽ�����" << endl;
				      
			}
		}
	
}