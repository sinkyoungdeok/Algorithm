#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (1 <= n && n <= 10000)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum = sum + i;
		}
		cout << sum << endl;
	}
	//system("pause");
	return 0;
}
