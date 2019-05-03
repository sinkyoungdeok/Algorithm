#include <iostream>
using namespace std;
int main()
{
	char *num = new char[51];
	cin >> num;
	int sum = 10;
	for (int i = 1; num[i] != NULL; i++)
	{
		if (num[i - 1] == num[i])
			sum += 5;
		else
			sum += 10;

	}

	cout << sum << endl;
	return 0;
}
