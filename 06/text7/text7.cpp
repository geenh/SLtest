#include <iostream>
using namespace std;
inline int add(int x, int y);
int main()
{
	int x = 5;
	int y = 6;
	int z = add(x, y);
	cout<<z<<endl;
}
int add(int x, int y)
{
	return x + y;

}