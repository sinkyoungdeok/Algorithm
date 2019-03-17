#include <iostream>
#include <string>
#include <queue>
#include <functional>
#include <cstdlib>
#include <map>
using namespace std;
int main()
{
		int N, M, K;
		cin >> N >> M >> K;
		int cnt = 0;
		while (1)
		{
			if (N - 2 + M - 1 < K || N <=1 || M <= 0)
				break;
			else
			{
				N -= 2;
				M -= 1;
				cnt++;
			}

		}
		cout << cnt << endl;

	return 0;
}
