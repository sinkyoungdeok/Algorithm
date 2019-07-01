#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
bool comp(string a, string b)
{
	return a > b;
}
int main()
{
	int n = 0;
	cin >> n;
	string *num = new string[n];
	string *num_in = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		num_in[i] = num[i];
	}
	sort(num_in, num_in + n);
	int incheck = 0;
	int decheck = 0;

	for (int i = 0; i < n; i++)
	{
		if (num_in[i] != num[i])
		{
			incheck = 1;
		}
		if (num_in[n - 1 - i] != num[i])
		{
			decheck = 1;
		}
	}
	if (incheck == 0)
		cout << "INCREASING" << endl;
	else if (decheck == 0)
		cout << "DECREASING" << endl;
	else
		cout << "NEITHER" << endl;

	return 0;
}
