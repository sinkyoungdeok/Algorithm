#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	while (1)
	{
		char num[251];
		cin.getline(num, 251);
		if (num[0] == '#')
			break;
		int check[26] = { 0 };
		for (int i = 0; i < strlen(num); i++)
		{
			if ('a' <= num[i] && num[i] <= 'z')
			{
				num[i] -= 32;
				check[num[i] - 'A'] = 1;
			}
			else if ('A' <= num[i] && num[i] <= 'Z')
				check[num[i] - 'A'] = 1;
		}
		int sum = 0;
		for (int i = 0; i < 26; i++)
		{
			if (check[i])
				sum++;
		}
		cout << sum << endl;
	}

	return 0;
}
