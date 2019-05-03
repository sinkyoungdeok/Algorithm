#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cout << "1";
	for (int i = 1; i < n; i++)
		cout << "0";
	cout << endl;
	return 0;
}
