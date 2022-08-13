#include<iostream>
using namespace std;

class CExample
{

public:
	CExample():i(5),j(i),ri(i)
	{
		
		cout << "i:" << i << endl;
		cout << "j:" << j << endl;
		cout << "ri:" << ri << endl;
		
    }

private:
	int i;
	const int j;
	int & ri;
};
int main()
{
	CExample e;

	return 0;
}