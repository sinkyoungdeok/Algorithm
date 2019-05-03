#include <iostream>
#include <queue>
using namespace std;
class knight
{
private:
	int x;
	int y;
	int cnt = 0;
public:
	knight(int x, int y, int cnt)
	{
		this->x = x;
		this->y = y;
		this->cnt = cnt;
	}
	int getX() { return x; }
	int getY() { return y; }
	int getCnt() { return cnt; }
};
int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		queue<knight> q;
		int input;
		int start_x, start_y;
		int destination_x, destination_y;
		bool reach = false;
		cin >> input >> start_x >> start_y >> destination_x >> destination_y;
		int **square = new int*[input];

		for (int i = 0; i < input; i++)
		{
			square[i] = new int[input];
			for (int j = 0; j < input; j++)
				square[i][j] = 0;
		}
		square[start_x][start_y] = 1;
		knight start(start_x, start_y, 0);
		q.push(start);

		while (!q.empty())
		{
			knight tmp = q.front(); q.pop();
			if (tmp.getX() == destination_x && tmp.getY() == destination_y)
			{
				cout << tmp.getCnt() << endl;
				reach = true;
				break;
			}
			else
			{
				int x = tmp.getX();
				int y = tmp.getY();
				int cnt = tmp.getCnt() + 1;
				x -= 2; y += 1; // 왼쪽위1
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				x += 1; y += 1; // 왼쪽위2
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				x += 2; // 오른쪽위1
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				x += 1; y -= 1; // 오른쪽위2
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				y -= 2; // 오른쪽아래1
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				x -= 1; y -= 1; // 오른쪽아래2
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				x -= 2; // 왼쪽아래1
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
				x -= 1; y += 1; // 왼쪽아래2
				if ((!(((x < 0 || y < 0) || x >= input) || y >= input)) && square[x][y] == 0) { knight new_tmp(x, y, cnt); q.push(new_tmp); square[x][y] = 1; }
			}

		}
		if (!reach)
			cout << "-1" << endl;
	}
	return 0;
}
