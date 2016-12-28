#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	if (a>0)
	{
		b = a % 100 / 10;
	}
	else b = -a % 100 / 10;
	cout << b << endl;
	return 0;
}
