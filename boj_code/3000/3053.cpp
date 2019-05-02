#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
	double r = 0;
	cin >> r;
	double pi = 3.1415926535897932384;
	double d =(double)(r * r)*pi;
	cout << fixed;
	cout << setprecision(6);
	cout << d<< endl;
	cout << fixed;
	cout << setprecision(6);
	cout << (double)(r * r)*2.0 << endl;

	return 0;
}
