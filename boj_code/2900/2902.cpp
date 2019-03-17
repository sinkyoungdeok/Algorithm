#include <iostream>
using namespace std;
int main()
{ 
	char *a = new char[100];
	cin >> a;
	char *b = new char[100];
	int j = 0;
	b[j] = a[0];
	for (int i = 1; a[i] != 0; i++)
	{
		if (a[i] == '-')
		{
			j++;
			b[j] = a[i + 1];
		}
	}
	for (int i = 0; i <= j; i++)
		cout << b[i];

	return 0;
}
