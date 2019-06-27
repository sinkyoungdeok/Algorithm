#include <cstdio>
#include <stack>
#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<string> v[201];
	int max_age = 0;
	for (int i = 0; i < N; i++)
	{
		int age; string name;
		cin >> age >> name;
		v[age].push_back(name);
		if (max_age < age)
			max_age = age;
	}
	for (int i = 1; i <= max_age; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
			cout << i << ' ' << v[i][j] << '\n';
	}
	return 0;
}
