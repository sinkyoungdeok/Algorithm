#include <iostream>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	string num[5];
	int maxlen = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		if (num[i].length() > maxlen)
			maxlen = num[i].length();
	}
	
	for (int j = 0; j < maxlen; j++)
	{
		for (int i = 0; i < 5; i++) {
			if (num[i].length() != 0)
			{
				cout << num[i][0];
				num[i].erase(0, 1);
			}

		}
	}
	return 0;
}
