#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *a = new char[100];
	cin >> a;
	int check = 0;
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			check++;
	}
	cout << check << endl;


	return 0;
}
