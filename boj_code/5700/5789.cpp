#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[1000];
		cin >> num;
		int numlen = strlen(num);
		if (num[numlen/2] == num[numlen/2 - 1])
			cout << "Do-it" << endl;
		else
			cout << "Do-it-Not" << endl;
	}
	return 0;
}
