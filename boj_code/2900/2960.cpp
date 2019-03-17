#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
bool num[1001];
		
int main()
{
	int N, K;
	cin >> N >> K;
	for (int i = 2; i <= N; i++)
	{
		if (num[i] == false)
		{
			num[i] = false;
			for (int j = i; j <= N; j += i)
			{
				if (num[j]) continue;
				K--;
				if (K == 0)
				{
					cout << j << endl;
					return 0;
				}
				num[j] = true;
			}
		}
	}
	num[0] = num[1] = true;
	

	return 0;
}
