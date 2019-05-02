#include <iostream>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	queue<string> qu;
	int maxlen = 0;
	while (1)
	{
		string num;
		cin >> num;
		if (num == "E-N-D")
		{
			if (!qu.empty()) {
				string tmp = qu.front();
				for (int i = 0; i < tmp.length(); i++)
					if ('A' <= tmp[i] && tmp[i] <= 'Z')
						tmp[i] += 32;
				cout << tmp << endl;
			}
			return 0;
		}
		int numlen = num.length();
		string tmp;
		for (int i = 0; i < numlen; i++)
		{
			if (('a' <= num[i] && num[i] <= 'z') || ('A' <= num[i] && num[i] <= 'Z') || num[i] == '-')
				tmp.push_back(num[i]);
		}
		num = tmp;
		if (maxlen < num.length())
		{
			maxlen = num.length();
			while (!qu.empty())
				qu.pop();
			qu.push(num);
		}

	}
	return 0;
}
