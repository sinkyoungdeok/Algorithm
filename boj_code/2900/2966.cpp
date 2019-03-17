#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;

	char num1[101];
	char num2[101];
	char num3[101];
	int i = 0;
	while (i<n)
	{
		num1[i] = 'A';
		num1[i + 1] = 'B';
		num1[i + 2] = 'C';
		i += 3;
	}
	i = 0;
	while (i < n)
	{
		num2[i] = 'B';
		num2[i+1] = 'A';
		num2[i+2] = 'B';
		num2[i+3] = 'C';
		i += 4;
	}
	i = 0;
	while (i <n)
	{
		num3[i] = 'C';
		num3[i + 1] = 'C';
		num3[i + 2] = 'A';
		num3[i + 3] = 'A';
		num3[i + 4] = 'B';
		num3[i + 5] = 'B';
		i += 6;
	}
	char* num = new char[n];
	cin >> num;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	for ( i = 0; i < n; i++)
	{
		if (num[i] == num1[i])
			sum1++;
		if (num[i] == num2[i])
			sum2++;
		if (num[i] == num3[i])
			sum3++;
	}
	int maxsum = sum1;
	if (maxsum < sum2)
		maxsum = sum2;
	if (maxsum < sum3)
		maxsum = sum3;
	cout << maxsum << endl;
	if (maxsum == sum1)
		cout << "Adrian" << endl;
	if (maxsum == sum2)
		cout << "Bruno" << endl;
	if (maxsum == sum3)
		cout << "Goran" << endl;
	return 0;
}
