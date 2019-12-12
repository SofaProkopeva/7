#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d1, d2, d3;
	cin >> a >> b >> c;
	d1 = a * a + b * b;
	d2 = b * b + c * c;
	d3 = a * a + c * c;
	if ((d1 == (c * c)) || (d2 == (a * a)) || (d3 == (b * b)))
		cout << "Yes";
	else
		cout << "No";
}

