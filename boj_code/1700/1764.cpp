#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	queue <string>qu;
	vector<string> v;
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a+b; i++)
	{
		string num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < a + b-1; i++)
	{
		if (v[i] == v[i + 1])
			qu.push(v[i]);
	}
	cout << qu.size() << endl;
	while (!qu.empty())
	{
		cout << qu.front() << endl;
		qu.pop();
	}
	return 0;
}
