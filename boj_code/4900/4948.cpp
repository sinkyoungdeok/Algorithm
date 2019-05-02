#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
bool num[1000000];
int main()
{
	for (int i = 2; i*i <= 1000000; i++)
	{
		if (num[i] == false)
		{
			num[i] = false;

			for (int j = i * 2; j <= 1000000; j += i)
				num[j] = true;
		}
	}
	num[0] = num[1] = true;//소수=false , 아닌경우 =true

	while (1)
	{
		int n = 0;
		cin >> n;
		if (n == 0)
			break;
		else
		{
			int cnt = 0;
			for (int i = n + 1; i <= n * 2; i++)
			{
				if (num[i] == false)
					cnt++;
			}
			cout << cnt << endl;


		}


	}

	return 0;
}
