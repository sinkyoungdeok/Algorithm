#include <iostream>
using namespace std;
int main()
{
	char *a = new char[10000];
	cin >> a;
	int jcheck = 0;
	int icheck = 0;
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] == 'J' && a[i + 1] == 'O' && a[i + 2] == 'I')
			jcheck++;
		else if (a[i] == 'I' && a[i + 1] == 'O' && a[i + 2] == 'I')
			icheck++;
	}
	cout << jcheck << endl << icheck << endl;

	return 0;
}
