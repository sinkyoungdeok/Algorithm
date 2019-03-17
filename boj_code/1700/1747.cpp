#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
bool num[2000001];
		
int main()
{
	for (int i = 2; i*i <= 2000000; i++)
	{
		if (num[i] == false)
		{
			num[i] = false;

			for (int j = i * 2; j <= 2000000; j += i)
				num[j] = true;
		}
	}
	num[0] = num[1] = true;
	
	int n = 0;
	cin >> n;
	for (int i = n; ; i++)
	{
		if (num[i] == false) {
			int dup = i;
			int sum = 0;
			while (dup)
			{
				sum *= 10;
				sum += dup % 10;
				dup /= 10;
			}
			if (sum == i)
			{
				cout << i << endl;
				return 0;
			}
		}
	}
	
	return 0;
}
