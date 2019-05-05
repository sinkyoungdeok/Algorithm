#include <iostream>
using namespace std;
unsigned long long int fibo[70];
int main()
{
	fibo[0] = fibo[1] = 1;
	fibo[2] = 2;
	fibo[3] = 4;
	for (int i = 4; i <= 67; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2] + fibo[i-3] + fibo[i-4];

	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int num = 0;
		cin >> num;
		cout << fibo[num] << endl;
	}
	return 0;
}
