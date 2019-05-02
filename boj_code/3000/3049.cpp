#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	printf("%d\n", (n*(n - 1)*(n - 2)*(n - 3)) / 24);



	return 0;
}
