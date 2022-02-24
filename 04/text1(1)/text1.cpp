#include <iostream>
using namespace std;
int main()
{
	
		cout << "ÊäÈëÖĞµÄÇ®Êı£¨w£©" << endl;
		int input;
		cin >> input;
		if (input >= 500)
		{
			cout << "ÂòÀ¼²©»ùÄá" << endl;

		}
		else if (input >= 200 && input <= 500)
		{
			cout << "Âò¿¨Ñç" << endl;
		}
		else if (input >= 50 && input <= 200)
		{
			cout << "Âò±¦Âí" << endl;
		}
		else if (input >= 1 && input <= 50)
		{
			cout << "Âò°ÂµÏ" << endl;
		}
		else
		{
			for (int i = 0; i <= 10000000; i++)
			{
				cout << "ÔÙ½ÓÔÙÀ÷" << endl;
				      
			}
		}
	
}