#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	double A[7] = { 9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193 };
	double B[7] = { 26.7, 75, 1.5, 42.5, 210, 3.8, 254 };
	double C[7] = { 1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88 };
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < 7; j++) {
			int P = 0;
			cin >> P;
			if (j % 3 == 0)
			{
				sum += floor(A[j] * pow((B[j] - P), C[j]));
			}
			else
				sum += floor(A[j] * pow((P - B[j]), C[j]));
		}
		cout << sum << endl;
	}
	return 0;
}
