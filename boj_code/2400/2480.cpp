#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	//int n = 0;
	//cin >> n;
	//int maxsum = 0;
	//for (int i = 0; i < n; i++)
	//{
		int sum = 0;
		int *num = new int[3];
		int check = 0;
		int same = 0;
		for (int j = 0; j < 3; j++)
			cin >> num[j];
		if (num[0] == num[1])
		{
			check++;
			same = num[0];
		}
		if (num[1] == num[2])
		{
			check++;
			same = num[1];
		}
		if (num[2] == num[0])
		{
			check++;
			same = num[2];
		}

		if (check == 3)
			sum += (10000 + 1000 * same);
		else if (check == 1)
			sum += (1000 + same * 100);
		else if (check == 0)
		{
			int max2 = max(num[0], num[1]);
			max2 = max(max2, num[2]);
			sum += (max2 * 100);

		}
		cout << sum << endl;
		//if (maxsum < sum)
		//	maxsum = sum;
		//cout << check << endl;
		delete[] num;
	//}
	//cout << maxsum << endl;
	return 0;
}
