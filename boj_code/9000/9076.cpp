#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int *num = new int[5];
		for (int j = 0; j < 5; j++)
			cin >> num[j];
		sort(num, num + 5);
		if (num[3] - num[1] >= 4)
			cout << "KIN" << endl;
		else
		{
			cout << num[1] + num[2] + num[3] << endl;
		}
	}
	return 0;
}
