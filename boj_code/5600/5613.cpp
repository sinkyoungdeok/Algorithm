#include <iostream>
using namespace std;
int main()
{
	long long int a;
	long long int b;
	char oper=' ';
	cin >> a;
	while (1) {
		cin >> oper;
		if (oper == '=')
			break;
		cin >> b;
		if (oper == '+')
			a += b;
		else if (oper == '-')
			a -= b;
		else if (oper == '*')
			a *= b;
		else if (oper == '/')
			a /= b;
	}
	cout << a << endl;
	return 0;
}
