#include <cstdio>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int **num = new int*[N + 1];
	int dup = 0;
	for (int i = 1; i <= N; i++)
	{
		num[i] = new int[4];
		cin >> num[i][0];
		if (num[i][0] == M)
			dup = i;
		for (int j = 1; j < 4; j++)
			cin >> num[i][j];
	}
	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		if (num[dup][1] < num[i][1])
			cnt++;
		else if (num[dup][1] == num[i][1] && num[dup][2] < num[i][2])
			cnt++;
		else if (num[dup][1] == num[i][1] &&num[dup][2] == num[i][2] && num[dup][3] < num[i][3])
			cnt++;

	}
	cout << cnt + 1 << endl;
	return 0;
}
