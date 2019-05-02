#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char ah[999];
	char ah2[999];
	cin >> ah >> ah2;

	if (strlen(ah) >= strlen(ah2))
		cout << "go" << endl;
	else
		cout << "no" << endl;

	return 0;
}
