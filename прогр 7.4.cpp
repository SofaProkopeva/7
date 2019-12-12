#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d1, d2;
	cin >> a;
	b = a % 100;
	b = b / 10;
	c = a % 10;
	a = a / 100;
	d1 = b - c;
	d2 = a - b;
	if (d1 == d2)
		cout << "Yes";
	else
		cout << "No";
}

