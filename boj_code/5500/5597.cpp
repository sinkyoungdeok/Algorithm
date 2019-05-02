#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int num[31] = { 0, };
	for (int i = 0; i < 28; i++)
	{
		int n = 0;
		cin >> n;
		num[n] = 1;
	}
	for (int i = 1; i <= 30; i++)
		if (num[i] == 0)
			cout << i << endl;
	return 0;
}
