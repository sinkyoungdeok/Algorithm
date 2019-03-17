#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
class A {
public:
	string num;
	int numb;

};
class comp {
public:
	bool operator()(A a, A b)
	{
		if (a.num > b.num)
			return true;
		else
			return false;
	}
};
int main()
{
	priority_queue<A, vector<A>, comp> pq;
	string num[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	stack <int>st;
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		A a;
		int tmpi = i;
		a.numb = i;
		int tmp2 = 0;
		
		while (tmpi)
		{
			st.push(tmpi % 10);
			tmpi /= 10;
		}
		while (!st.empty())
		{
			a.num += num[st.top()];
			st.pop();
		}
		pq.push(a);
	}
	int cnt = 0;
	while (!pq.empty())
	{
		A a = pq.top();
		pq.pop();
		cout << a.numb << " ";
		cnt++;
		if (cnt != 0 && cnt % 10 == 0)
			cout << endl;
	}
	return 0;
}
