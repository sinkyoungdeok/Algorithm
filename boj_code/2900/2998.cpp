#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main()
{
	stack<int> st;
	char num[101];
	cin >> num;
	int two = 1;
	int sum = 0;
	for (int i = strlen(num) - 1; i >= 0; i--)
	{
		sum += two * (num[i]-'0');
		two *= 2;
		if (two == 8)
		{
			st.push(sum);
			two = 1;
			sum = 0;
		}
	}
	if (sum != 0)
		st.push(sum);
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}


	return 0;
}
