#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
class Compare {
public:
	bool operator() (int a, int b) {
		if (a == -b)
			return a > b;
		if (a < 0)
			a = -a;
		if (b < 0)
			b = -b;
		return a >b;
	}
};
int main()
{
	priority_queue<int,vector<int>,Compare> qu;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a == 0)
		{
			if (qu.empty() == 1)
				cout << "0" << endl; 
			else{
				cout << qu.top() << endl;
				qu.pop();
			}
		}
		else
			qu.push(a);


	}
	return 0;
}
