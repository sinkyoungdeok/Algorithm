#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;
		double sum = 0;

		for (int j = 0; j < num; j++)
		{
			sum += 0.5;
			sum *= 2;
		}

		cout << (int)sum << endl;
	}

	return 0;
}
