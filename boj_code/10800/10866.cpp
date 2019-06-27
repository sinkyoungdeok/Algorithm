#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	while (n--)
	{
		string com;
		cin >> com;
		if (com == "push_front")
		{
			int num;
			cin >> num;
			v.insert(v.begin(), num);
		}
		else if (com == "push_back")
		{
			int num;
			cin >> num;
			v.push_back(num);
		}
		else if (com == "pop_front")
		{
			if (v.size() == 0)
				cout << "-1" << endl;
			else
			{
				cout << v.front() << endl;
				v.erase(v.begin(), v.begin()+1);
			}
		}
		else if (com == "pop_back")
		{
			if (v.size() == 0)
				cout << "-1" << endl;
			else
			{
				cout << v.back() << endl;
				v.erase(v.end()-1,v.end());
			}

		}
		else if (com == "size")
		{
			cout << v.size() << endl;
		}
		else if (com == "empty")
			cout << v.empty() << endl;
		else if (com == "front")
		{
			if (v.size() == 0)
				cout << "-1" << endl;
			else
				cout << v.front() << endl;
		}
		else if (com == "back")
		{
			if (v.size() == 0)
				cout << "-1" << endl;
			else
				cout << v.back() << endl;
		}

	}
	return 0;
}
