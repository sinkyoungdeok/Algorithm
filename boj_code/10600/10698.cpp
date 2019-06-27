#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b,c;
		char oper;
		char oper2;
		cin >> a >> oper >> b >> oper2 >> c;
		cout << "Case " << i + 1 << ": ";
		if (oper == '+')
			if (a + b == c)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		else
			if (a - b == c)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;




	}


	return 0;
}
