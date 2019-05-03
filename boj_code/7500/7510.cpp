#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num[3];
		cin >> num[0] >> num[1] >> num[2];

		sort(num, num + 3);

		cout << "Scenario #" << i + 1 << ":" << endl;
		if (num[0] * num[0] + num[1] * num[1] == num[2] * num[2])
			cout << "yes" << endl << endl;
		else
			cout << "no" << endl << endl;
	}
	return 0;
}
