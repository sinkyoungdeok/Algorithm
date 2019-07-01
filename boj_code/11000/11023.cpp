#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num, sum = 0;
	while (scanf("%d",&num) != EOF)
		sum += num;

	cout << sum << endl;

	return 0;
}
