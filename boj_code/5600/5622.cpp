#include <iostream>
using namespace std;
int main()
{
	char *a = new char[15];
	cin >> a;
	int check = 0;
	for (int i = 0; i < 15; i++)
	{
		if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C')
			check += 3;
		else if (a[i] == 'D' || a[i] == 'E' || a[i] == 'F')
			check += 4;
		else if (a[i] == 'G' || a[i] == 'H' || a[i] == 'I')
			check += 5;
		else if (a[i] == 'J' || a[i] == 'K' || a[i] == 'L')
			check += 6;
		else if (a[i] == 'M' || a[i] == 'N' || a[i] == 'O')
			check += 7;
		else if (a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S')
			check += 8;
		else if (a[i] == 'T' || a[i] == 'U' || a[i] == 'V')
			check += 9;
		else if (a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z')
			check += 10;
	}
	cout << check << endl;
	return 0;
}
