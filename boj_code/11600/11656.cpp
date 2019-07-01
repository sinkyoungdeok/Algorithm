#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	vector<string> v;
	string num;
	cin >> num;
	int len = num.length();
	for (int i = 0; i < len; i++)
	{
		v.push_back(num);
		num.erase(0, 1);
	}
	sort(v.begin(), v.end());
	while (v.size() != 0)
	{
		cout << v.front() << endl;
		v.erase(v.begin(), v.begin() + 1);
	}

	return 0;
}
