#include <iostream>
#include <queue>
using namespace std;
class xy {
public:
	int x;
	int y;
	xy(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

};
int main()
{
	queue<xy> q;

	int M, N;
	cin >> M >> N;
	int **tomato = new int*[N];
	for (int i = 0; i < N; i++)
	{
		tomato[i] = new int[M];
		for (int j = 0; j < M; j++)
		{
			cin >> tomato[i][j];
			if (tomato[i][j] == 1)
			{
				xy tmp(j, i);
				q.push(tmp);
			}
		}
	}
	int direction_x[4] = { -1,0,1,0 };// 왼위오아 (x)
	int direction_y[4] = { 0,-1,0,1 };// 왼위오아 (y)
	while (!q.empty())
	{
		xy tmp = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			int x = tmp.x + direction_x[i];
			int y = tmp.y + direction_y[i];

			if (x < 0 || y < 0 || x >= M || y >= N)
				continue;
			if (tomato[y][x] == -1 || tomato[y][x] >= 1)
				continue;
			

			xy new_xy(x, y);
			q.push(new_xy);
			tomato[y][x] = tomato[tmp.y][tmp.x] + 1;
		}




	}
	int mx_day = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (tomato[i][j] == 0)
			{
				cout << "-1" << endl;
				return 0;
			}
			if (mx_day < tomato[i][j])
				mx_day = tomato[i][j];
		}
	}
	cout << mx_day-1 << endl;

	return 0;
}
