#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int*num = new int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num, num + n);
	cout << num[0] << " ";

	for (int i = 0; i < n - 1; i++)
		if (num[i] == num[i + 1])
			continue;
		else
			cout << num[i + 1] << " ";
	cout << endl;

	return 0;
}
