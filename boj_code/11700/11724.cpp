#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> *adj = new vector<int>[N + 1];
	bool *visited = new bool[N + 1];
	for (int i = 0; i <= N; i++)
		visited[i] = false;
	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int cnt = 0;
	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			cnt++;
			visited[i] = true;
			q.push(i);


			while (!q.empty())
			{
				int curr = q.front(); q.pop();

				for (int j = 0; j < adj[curr].size(); j++)
				{
					if (!visited[adj[curr][j]])
					{
						q.push(adj[curr][j]);
						visited[adj[curr][j]] = true;
					}
				}


			}
		}


	}
	cout << cnt << endl;



	return 0;
}
