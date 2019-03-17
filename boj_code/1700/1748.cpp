#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int check = 0;
	for (int i = 1; i <= n; i++)
	{
		int dui = i;
		while (dui != 0)
		{
			dui /= 10;
			check++;
		}
	}
	cout << check << endl;



	return 0;
}
