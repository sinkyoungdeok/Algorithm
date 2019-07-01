#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <vector>
using namespace std;
struct A{
	int x;
	int y;
};
bool cmp(A a1, A a2)
{
	if (a1.x < a2.x) return true;
	else if (a1.x == a2.x) return a1.y < a2.y;
	else return false;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	vector<A> v;
	for (int i = 0; i < n; i++)
	{
		A a;
		scanf("%d %d", &a.x, &a.y);
		v.push_back(a);
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", v[i].x, v[i].y);
	}
	return 0;
}
