#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> v;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] != i + 1)
		{
			check = 1;
			break;
		}
	}

	if (check==0)
	{
		cout << "-1" << endl;
	}
	else {
		prev_permutation(v.begin(), v.end());

		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
