#include <iostream>
#include <queue>
#include <fstream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, s;
		cin >> n >> m >> s;
		vector<pair<int,int>> *adj = new vector<pair<int,int>>[n];
		for (int i = 0; i < m; i++)
		{
			int x, y, t;
			cin >> x >> y >> t;

			adj[y - 1].push_back(pair<int,int>(x - 1, t));
		}
		int *dist = new int[n];
		bool *visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			dist[i] = 1000000000;
			visited[i] = false;
		}
		priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
		dist[s - 1] = 0;
		pq.push(pair<int,int>(0, s - 1));
		while (!pq.empty())
		{
			int curr;
			do {
				curr = pq.top().second;
				pq.pop();
			} while (!pq.empty() && visited[curr]);

			if (visited[curr])break;

			visited[curr] = true;
			for (int i = 0; i < adj[curr].size(); i++)
			{
				int next = adj[curr][i].first;
				int di = adj[curr][i].second;

				if (dist[next] > dist[curr] + di)
				{
					dist[next] = dist[curr] + di;
					pq.push(pair<int,int>(dist[next], next));
				}
			}
		}
		int cnt = 0;
		int max_cost = 0;
		for (int i = 0; i < n; i++)
		{
			if (dist[i] != 1000000000)
			{
				cnt++;
				if (max_cost < dist[i])
					max_cost = dist[i];
			}
		}
		cout << cnt << " " << max_cost << endl;

	}


	return 0;
}
