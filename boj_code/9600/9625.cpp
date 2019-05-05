#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int K;
	cin >> K;
	int num[46] = { 0,1 };
	for (int i = 2; i <= K; i++)
		num[i] = num[i - 1] + num[i - 2];
	cout << num[K - 1] << " " << num[K] << endl;
	return 0;
}
