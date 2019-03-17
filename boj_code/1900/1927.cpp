#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
class Compare {
public:
	bool operator() (int a, int b)
	{
		return a > b;
	}
};
int main()
{
	priority_queue<int, vector<int>, Compare> qu;
	int n;
	scanf("%d", &n);
	int a;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a)
			qu.push(a);
		else if (qu.empty())
			printf("0\n");
		else
		{
			printf("%d\n", qu.top());
			qu.pop();
		}


	}

	return 0;
}
