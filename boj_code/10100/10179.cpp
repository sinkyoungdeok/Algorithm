#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double num = 0;
		cin >> num;
		printf("$%.2f \n", ((num*0.8)));
	}
	return 0;
}
