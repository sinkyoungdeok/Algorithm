#include <iostream>
#include <stack>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	stack<char*> st;
	char num[36] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q','R','S','T','U','V','W','X','Y','Z' };
	unsigned long long int B,Bpow;
	char N[10001];
	cin >> N >> B;
	Bpow = 1;
	unsigned long long int sum = 0;
	for (int i = strlen(N) - 1; i >= 0; i--)
	{
		for (int j = 0; j < B; j++)
			if (N[i] == num[j])
				sum += Bpow * j;

		Bpow *= B;
	}
	cout << sum << endl;
	return 0;
}
