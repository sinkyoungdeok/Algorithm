#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int *weight = new int[n];
	int *height = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> weight[i] >> height[i];
	}

	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = 0; j < n; j++)
		{
			if (weight[i] < weight[j] && height[i] < height[j])
				count++;
		}
		cout << count << endl;

	}


	return 0;
}
