#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		int minnum = min(a, b);
		int min1 = 0;
		int max1 = 0;
		for (int j = 1; j <= minnum; j++)
		{
			if (a%j == 0 && b%j == 0)
				min1 = j;
		}
		cout << a * b / min1 << " " << min1 << endl;



	}
	return 0;
}
