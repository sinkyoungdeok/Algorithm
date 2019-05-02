#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[100];
		cin >> num;
		for (int j = 0; num[j] != NULL; j++)
		{
			if ('A' <= num[j] && num[j] <= 'Z')
				num[j] += 32;
		}
		cout << num << endl;
	}


	return 0;
}
