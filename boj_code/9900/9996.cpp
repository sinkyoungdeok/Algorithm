#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	string num;
	cin >> num;
	int leftcnt = 0;
	int rightcnt = 0;
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == '*')
		{
			leftcnt = i;
			rightcnt = num.length() - i - 1;

			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		if (num.length() - 1 > name.length())
			cout << "NE" << endl;
		else {
			int check = 0;
			for (int j = 0; j < leftcnt; j++)
			{
				if (num[j] != name[j])
				{
					check = 1;
					break;
				}
			}
			if (check == 0) {
				for (int j = 0; j < rightcnt; j++)
				{
					if (num[num.length() - j - 1] != name[name.length() - j - 1])
					{
						check = 1;
						break;
					}
				}
			}
			if (check == 0)
				cout << "DA" << endl;
			else
				cout << "NE" << endl;
		}
	}


	return 0;
}
