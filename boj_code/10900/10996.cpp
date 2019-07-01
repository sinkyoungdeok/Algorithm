#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (n == 1)
		cout << "*" << endl;
	else {
		for (int i = 1; i <= n * 2; i++)
		{
			if (i % 2 == 1)
				for (int j = 0; j < (n + 1) / 2; j++)
					cout << "* ";

			else
				for (int j = 0; j < n / 2; j++)
					cout << " *";

				cout << endl;
		}


	}
	return 0;
}
