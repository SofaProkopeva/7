#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	b = a % 100;
	c = a % 2;
	if ((c == 0) && (b == a))
		cout << "Yes";
	else
		cout << "No";
}

