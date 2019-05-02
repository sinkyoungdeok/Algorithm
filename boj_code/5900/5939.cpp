#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> v;
	int n = 0;
	cin >> n;
	for(int i=0; i< n; i++)
	{
		int h, m, s;
		int sum = 0;
		cin >> h >> m >> s;
		sum += h * 3600 + m * 60 + s;
		v.push_back(sum);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		int h, m, s;
		h = v[i] / 3600;
		v[i] %= 3600;
		m = v[i] / 60;
		v[i] %= 60;
		s = v[i];

		cout << h << " " << m << " " << s << endl;
	}
	
	return 0;
}
