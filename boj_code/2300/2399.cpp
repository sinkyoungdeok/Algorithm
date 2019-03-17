#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	long long int *num = new long long int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];

	long long int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (num[i] - num[j] > 0)
				sum += num[i] - num[j];
			else
				sum += num[j] - num[i];
	cout << sum << endl;


	return 0;
}
