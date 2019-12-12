#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a;
	d = a % 10;
	a = a / 10;
	c = a % 10;
	a = a / 10;
	b = a % 10;
	a = a / 10;
	if ((a == d) && (b == c))
		cout << "Yes";
	else
		cout << "No";
}
