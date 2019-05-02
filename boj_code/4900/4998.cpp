#include <iostream>
using namespace std;
int main() 
{
	
	double a, b, c;

	while (cin >> a >> b >> c) {
		int check = 0;
		while (a <= c)
		{
			check++;
			a *= 1 + b * 0.01;
		}
		cout << check << endl;
	}
	return 0;
}
