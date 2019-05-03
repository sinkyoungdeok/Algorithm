#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		int check = 0;
		for (int b = 1; b < n; b++)
		{
			for (int a = 1; a < b; a++)
			{
				double result = (double) (a*a + b * b + m) / (a * b);
				if (result == floor(result))
					check++;
			}
		}
		cout << check << endl;
	}
	return 0;
}
