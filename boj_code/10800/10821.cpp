#include <iostream>
#include <string>
using namespace std;
int main()
{
	char *a = new char[101];
	cin >> a;
	int check = 1;
	for (int i = 0; a[i] != NULL; i++)
		if (a[i] == ',')
			check++;
	cout << check << endl;

	return 0;
}
