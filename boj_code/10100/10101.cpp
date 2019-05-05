#include <iostream>
using namespace std;
int main()
{
	int a; int b; int c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum == 180)
	{
		if (a == 60 && b == 60 && c == 60)
			cout << "Equilateral" << endl;
		else if (a == b || b == c || c == a)
			cout << "Isosceles" << endl;
		else
			cout << "Scalene" << endl;
	}
	else
		cout << "Error" << endl;

	return 0;
}
