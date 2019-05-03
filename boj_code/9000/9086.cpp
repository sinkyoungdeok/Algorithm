#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char *num = new char[1001];
		cin >> num;
		int numlen = strlen(num);
		cout << num[0] << num[numlen - 1] << endl;

	}
	return 0;
}
