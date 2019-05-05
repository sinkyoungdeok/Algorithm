#include <iostream>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	priority_queue<string> pq;
	int n = 0;
	cin >> n;
	string *num = new string[n];
	int *check = new int[n];
	int check_max = 0;
	for (int i = 0; i < n; i++)
	{
		check[i] = 1;
		cin >> num[i];
		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j])
			{
				check[j]++;
				if (check[j] > check_max)
				{
					check_max = check[j];
					while (!pq.empty())
						pq.pop();
					pq.push(num[i]);
				}
				else if (check[j] == check_max)
				{
					pq.push(num[i]);
				}
				break;
			}
		}
	}
	cout << pq.top() << " " << check_max << endl;
	return 0;
}
