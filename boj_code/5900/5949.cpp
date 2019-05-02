#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
	stack<char> st;
	unsigned long long int N;
	cin >> N;
	string stN = to_string(N);
	int three = 0;
	for (int i = stN.length() - 1; i >= 0; i--)
	{
		st.push(stN[i]);
		three++;
		if (three % 3 == 0 && i!=0)
			st.push(',');

	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	return 0;
}
