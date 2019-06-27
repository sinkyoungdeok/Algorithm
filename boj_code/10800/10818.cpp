#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num = new int[n];
	int min = 1000000;
	int max = -1000000;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (min > num[i])
			min = num[i];
		if (max < num[i])
			max = num[i];
	}
	cout << min << " " << max << endl;

	return 0;
}
