#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int i = 1;
	while (n != 0)
	{
		int n0 = n;
		int n1 = 3 * n0;
		int n2 = 0;
		if (n1 % 2 == 0)
			n2 = n1 / 2;
		else
			n2 = (n1 + 1) / 2;
		int n3 = 3 * n2;
		int n4 = n3 / 9;
		cout << i << ". ";
		if (n1 % 2 == 0)
			cout << "even ";
		else
			cout << "odd ";
		cout << n4 << endl;

		i++;
		cin >> n;
	}
	return 0;
}
