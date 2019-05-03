#include <iostream>
#include <string>
using namespace std;
int num[1001];
int main()
{
	int a, b;
	cin >> a >> b;
	int plus = 1;
	int check = 0;
	int sum = 0;
	for (int i = 1; i <= b; i++)
	{
		if (plus > check)
		{
			num[i] = plus;
			check++;
		}
		else
		{
			num[i] = ++plus;
			check = 1;
		}
		sum += num[i];
	}
	for (int i = 1; i < a; i++)
	{
		sum -= num[i];
	}
	cout << sum << endl;
	
	return 0;
}
