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
		v.push_back(i + 1);

	do
	{
		for (int i = 0; i < v.size(); i++)
			printf("%d ", v[i]);
		printf("\n");
	} while (next_permutation(v.begin(), v.end()));

	
	return 0;
}
