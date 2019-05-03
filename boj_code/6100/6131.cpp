#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int N = 0;
	cin >> N;
	int check = 0;
	for (int A = 1; A <= 500; A++)
	{
		for (int B = 1; B < A; B++)
		{
			if (A*A - B * B == N)
				check++;
		}
	}
	cout << check << endl;
	return 0;
}
