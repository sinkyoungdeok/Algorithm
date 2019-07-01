#include <iostream>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	while (test--)
	{
		int a, b;
		cin >> a >> b;
		string num;
		cin >> num;

		for (int i = 0; i<num.length(); i++)
		{
			num[i] = ((num[i] - 'A')*a + b) % 26;
			num[i] += 'A';
			cout << num[i];

		}
		cout << endl;


	}
	return 0;
}
