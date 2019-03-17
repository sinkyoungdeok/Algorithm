#include <iostream>
#include <cstdio>
using namespace std;
int main()
{//a = 97 , z=122 , A= 65 , Z=90
	char num[21];
	cin >> num;
	int sum = 0;
	for (int i = 0; num[i] != NULL; i++)
	{
		if ('a' <= num[i] && num[i] <= 'z')
			sum += (int)num[i] - 96;
		else
			sum += (int)num[i] - 38;
	}
	if (sum == 2) {
		cout << "It is a prime word." << endl;
		return 0;
	}
	for (int i = 2; i <= sum / 2; i++)
	{
		if (sum % i == 0)
		{
			cout << "It is not a prime word." << endl;
			return 0;
		}
	}
	cout << "It is a prime word." << endl;
	return 0;
}
