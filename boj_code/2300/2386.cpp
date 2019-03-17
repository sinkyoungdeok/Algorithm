#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	char c;
	string num;
	while (1)
	{
		cin >> c;
		if (c == '#')
			return 0;
		getline(cin, num);
		int check = 0;
		int num_len = num.size();
		for (int i = 0; i < num_len; i++)
		{
			if ('A' <= num[i] && num[i] <= 'Z')
				num[i] += 32;
		}
		for (int i = 0; i < num_len; i++)
		{
			if (num[i] == c)
				check++;
		}
		cout << c << " " << check << endl;
	}
	return 0;
}
