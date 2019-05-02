#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n = 0; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double *num = new double[5];
		for (int j = 0; j < 5; j++)
			cin >> num[j];

		double sum = 350.34*num[0];
		sum += 230.90*num[1];
		sum += 190.55*num[2];
		sum += 125.30*num[3];
		sum += 180.90*num[4];

		printf("$%.2f\n", sum);
		

		delete[] num;
	}
	return 0;
}
