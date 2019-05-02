#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n[5];
	for (int i = 0; i < 5; i++)
		cin >> n[i];

	int a = ceil((double)n[1] / n[3]);
	int b = ceil((double)n[2] / n[4]);
	if (a > b)
		cout << n[0] - a << endl;
	else
		cout << n[0] - b << endl;
	return 0;
}
