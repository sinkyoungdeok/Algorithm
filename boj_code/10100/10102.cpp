#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	char *num = new char[n];
	int Acheck = 0;
	int Bcheck = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] == 'A')
			Acheck++;
		else
			Bcheck++;
	}
	if (Acheck == Bcheck)
		cout << "Tie";
	else if (Acheck > Bcheck)
		cout << "A";
	else
		cout << "B";
	return 0;
}
