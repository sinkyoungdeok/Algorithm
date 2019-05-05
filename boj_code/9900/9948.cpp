#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
int main() 
{
	while (1)
	{
		int d;
		string m;
		cin >> d >> m;
		if (d == 0 && m == "#")
			break;

		if (m == "August" && d == 4)
			cout << "Happy birthday" << endl;
		else if (m == "February" && d == 29)
			cout << "Unlucky" << endl;
		else if (m == "August")
		{
			if (d < 4)
				cout << "Yes" << endl;
			else if (d > 4)
				cout << "No" << endl;
		}
		else if (m == "September" || m == "October" || m == "November" || m == "December")
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}
