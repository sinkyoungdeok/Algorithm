#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << "You get "<<a/b<<" piece(s) and your dad gets "<<a%b<< " piece(s). " << endl;

	}
	return 0;
}
