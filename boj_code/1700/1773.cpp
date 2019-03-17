#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	int N;
	int C;
	cin >> N >> C;

	int time[2000001] = { 0 };
	int time_cnt = 0;
	for (int i = 0; i < N; i++)
	{
		int stu;
		cin >> stu;
		for (int j = stu; j <= C; j += stu)
		{
			if (time[j] == 0)
			{
				time[j] = 1;
				time_cnt++;
			}
		}

	}
	cout << time_cnt << endl;
	
	return 0;
}
