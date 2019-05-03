#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	while (true)
	{
		string num;
		cin >> num;
		if (num == "0")
			return 0;
		while (num.length() != 1)
		{
			string dup = num;
			int sum = 0;
			while (dup.length())
			{
				sum += dup.front() - '0';
				dup.erase(0, 1);
			}
			num = to_string(sum);
		}
		cout << num << endl;
	}


	return 0;
}
