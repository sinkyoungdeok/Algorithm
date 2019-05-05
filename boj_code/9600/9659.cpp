#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
	unsigned long long int n;
	cin >> n;
	if (n % 2 == 1)
		cout << "SK";
	else
		cout << "CY";
}
