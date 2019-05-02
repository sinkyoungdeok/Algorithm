#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Class " << i + 1 << endl;
		int count = 0;
		cin >> count;
		int *num = new int[count];
		int max = 0;
		int min = 100;
		for (int j = 0; j < count; j++)
		{
			cin >> num[j];
			if (max < num[j])
				max = num[j];
			if (min > num[j])
				min = num[j];
		}
		sort(num, num + count);
		int maxgap = 0;
		for (int j = 1; j < count; j++)
			if (maxgap < (num[j] - num[j - 1]))
				maxgap = num[j] - num[j - 1];
		cout << "Max " << max << ", Min " << min << ", Largest gap " << maxgap << endl;

	}
	return 0;
}
