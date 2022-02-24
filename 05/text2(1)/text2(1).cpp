#include<iostream>
using namespace std;
int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 20; cock++)
	{
		for (hen = 0; hen <= 33; hen++)
		{
			for (chick = 0; chick <= 99; chick += 3)
			{
				if ((cock + hen + chick == 100) && (5 * cock + 3 * hen + chick / 3 == 100))
				{
					cout << "公鸡：" << cock << ",母鸡：" << hen << "，小鸡：" << chick << endl;
				}
			}
		}
	}
}