#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	stack<char*> st;
	char num[36][3] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q","R","S","T","U","V","W","X","Y","Z"};
	unsigned long long int N, B;
	cin >> N >> B;
	while (N)
	{
		st.push(num[N%B]);
		N /= B;
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << endl;
	return 0;
}
