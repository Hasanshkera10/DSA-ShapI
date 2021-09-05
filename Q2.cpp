#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter Three Numbers:" << endl;
	cin >> a >> b >> c;
	cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl;
	if (a > b && a > c)
		cout << "a is the largest";
	else if (b > a && b > c)
		cout << "b is the largest";
	else
		cout << "c is the largest";
	return 0;
}