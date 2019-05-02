#include <iostream>
using namespace std;
int main()
{
	int *num = new int[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	cout << sum << endl;
	return 0;
}
