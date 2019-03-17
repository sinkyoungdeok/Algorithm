#include <iostream>
using namespace std;
int main()
{
	char *a = new char[100];
	cin >> a;
	int check = 0;
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] == 'c' && (a[i + 1] == '=' || a[i + 1] == '-'))
			continue;
		else if (a[i] == 'd' && a[i + 1] == '-')
			continue;
		else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '=')
		{
			check--;
			continue;
		}
		else if (a[i] == 'l' && a[i + 1] == 'j')
			continue;
		else if (a[i] == 'n' && a[i + 1] == 'j')
			continue;
		else if (a[i] == 's' && a[i + 1] == '=')
			continue;
		else if (a[i-1] != 'd' && a[i] == 'z' && a[i + 1] == '=')
			continue;
		check++;
	}
	cout << check << endl;
	return 0;
}
