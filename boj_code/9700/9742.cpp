#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
	string num;
	int n, ft[11] = { 1,1 };
	for (int i = 2; i <= 10; i++)
		ft[i] = ft[i - 1] * i;
	while (cin >> num >> n)
	{
		cout << num << " " << n << " = ";
		if(ft[num.length()] < n) cout << "No permutation" << endl;
		else
		{
			for (int i = 0; i < n - 1; i++)
				next_permutation(num.begin(), num.end());
			cout << num << endl;
		}
	}
	return 0;
}
