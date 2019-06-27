#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a=0, b=0, c = 0;
	cin >> a >> b >> c;
	cout << (a + b) % c << endl;
	cout << (a%c + b % c) % c << endl;
	cout << (a*b) % c << endl;
	cout << (a%c * b%c) % c << endl;
	//system("pause");
	return 0;
}
