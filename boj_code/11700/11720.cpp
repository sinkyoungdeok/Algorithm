#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (1 <= n && n <= 100)
	{
		int sum = 0;
		char *num = new char[n];
		int *inum = new int[n];
		cin >> num;
		
		for (int i = 0; i < n; i++)
		{
			inum[i] = num[i] - '0';
			sum = sum + inum[i];
		}
		cout << sum << endl;
		
	}
	//system("pause");
	return 0;
}
