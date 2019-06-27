#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <ctime>
using namespace std;
// A=65, Z=90, a=97, z=122
int main() 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num % 2 == 0)
			cout << num << " is even" << endl;
		else
			cout << num << " is odd" << endl;

	}


	return 0;
}
