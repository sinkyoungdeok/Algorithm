#include <iostream>
using namespace std;
int main()
{
	long long int n = 0;
	cin >> n;
	unsigned long long int sum = 0;
	for (int i = 1; i < n; i++)
		sum += (n + 1) * i;
	cout << sum << endl;

	


	return 0;
}
