#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter A, B, C." << endl;
	cin >> a >> b >> c;
	if ((a < b) && (b < c))
		cout << "Yes";
	else
		cout << "No";
}


