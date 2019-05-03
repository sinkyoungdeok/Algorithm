#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int fact(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	return sum;
}
int main()
{
	cout << "n e" << endl;
	cout << "- -----------" << endl;
	double num[10] = { 0 };
	num[0] = 1;
	cout << "0 " << num[0] << endl;
	for (int i = 1; i <= 9; i++)
	{
		num[i] += num[i - 1];
		int fac = fact(i);
		num[i] += 1.0 / fac;
		cout << i << " ";
		if(i>=3)
		printf("%.9f\n", num[i]);
		else
		cout <<num[i] << endl;
	}
	return 0;
}
