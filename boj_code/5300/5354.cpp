#include <iostream>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			if (j == 0 || j == a - 1)
				for (int k = 0; k < a; k++)
					cout << "#";
			else {
				cout << "#";
				for (int k = 0; k < a - 2; k++)
					cout << "J";
				cout << "#";
			}

			cout << endl;
		}
		cout << endl;

	}


	return 0;
}
