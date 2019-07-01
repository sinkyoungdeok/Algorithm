#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char dif[6][10] = { "Yakk","Doh","Seh","Ghar","Bang","Sheesh" };
	char same[6][10] = { "Habb Yakk","Dobara","Dousa","Dorgy","Dabash","Dosh" };

	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if ((a == 6 && b == 5) || a == 5 && b == 6)
			cout << "Case " << i + 1 << ": Sheesh Beesh" << endl;
		else {
			if (a == b)
				cout << "Case " << i + 1 << ": " << same[a - 1] << endl;
			else
				if (a > b)
					cout << "Case " << i + 1 << ": " << dif[a - 1] << " " << dif[b - 1] << endl;
				else
					cout << "Case " << i + 1 << ": " << dif[b - 1] << " " << dif[a - 1] << endl;

		}
	}
	return 0;
}
