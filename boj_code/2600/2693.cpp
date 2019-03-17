#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int *num = new int[10];

		for (int j = 0; j < 10; j++)
			cin >> num[j];

		for (int j = 0; j < 10; j++)
		{
			for(int k=0;k<j;k++)
				if (num[j] > num[k])
				{
					int swap = num[j];
					num[j] = num[k];
					num[k] = swap;
				}
		}
		cout << num[2] << endl;
		delete[]num;
	}
	return 0;
}
