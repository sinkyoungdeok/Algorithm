#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *num = new int[n];
	int sum = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < n; i++)
	{
		sum += + num[i];
		sum2 += sum;
	}
	cout << sum2 << endl;


	return 0;
}
