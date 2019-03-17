#include <iostream>
#include <stack>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	while (1) {
		int a, b;
		char c;
		cin >> a >> c >> b;
		if (a == 0 && b == 0 && c == 'W')
			break;

		if (c == 'D')
			cout << a + b << endl;
		else {
			if (a - b < -200)
				cout << "Not allowed" << endl;
			else
				cout << a - b << endl;
		}
	}
	return 0;
}
