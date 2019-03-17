#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int a = 0; 
	double b = 0;
	double result = 0;
	cin >> a >> b;
	b = b - 1;
	b = b + 0.01;
	result = a * b;
	cout << ceil(result) << endl;

	return 0;
}
