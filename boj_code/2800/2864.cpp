#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *num1 = new char[100];
	char *num2 = new char[100];
	cin >> num1 >> num2;
	for (int i = 0; num1[i] != NULL; i++)
		if (num1[i] == '5')
			num1[i] = '6';
	for (int i = 0; num2[i] != NULL; i++)
		if (num2[i] == '5')
			num2[i] = '6';

	int sum1 = 0;
	int sum2 = 0;
	int ten = 1;
	int max = 0;
	int min = 0;
	for (int i = strlen(num1) - 1; i >= 0; i--)
	{
		sum1 += ((num1[i]-'0')*ten);
		ten *= 10;
	}
	ten = 1;
	for (int i = strlen(num2) - 1; i >= 0; i--)
	{
		sum2 += ((num2[i] - '0')*ten);
		ten *= 10;
	}
	max = sum1 + sum2;
	sum1 = 0;
	sum2 = 0;
	for (int i = 0; num1[i] != NULL; i++)
		if (num1[i] == '6')
			num1[i] = '5';
	for (int i = 0; num2[i] != NULL; i++)
		if (num2[i] == '6')
			num2[i] = '5';
	ten = 1;
	for (int i = strlen(num1) - 1; i >= 0; i--)
	{
		sum1 += ((num1[i] - '0')*ten);
		ten *= 10;
	}
	ten = 1;
	for (int i = strlen(num2) - 1; i >= 0; i--)
	{
		sum2 += ((num2[i] - '0')*ten);
		ten *= 10;
	}
	min = sum1 + sum2;
	
	cout << min << " " << max << endl;
	return 0;
}
