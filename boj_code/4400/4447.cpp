#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	cin.ignore();
	for (int i = 0; i < test; i++)
	{
		char *num = new char[30];
		cin.getline(num, 30);
		int numlen = strlen(num);
		int gcount = 0;
		int bcount = 0;
		for (int j = 0; j < numlen; j++)
		{
			if (num[j] == 'g' || num[j] == 'G')
				gcount++;
			else if (num[j] == 'b' || num[j] == 'B')
				bcount++;
		}
		cout << num << " is ";
		if (gcount > bcount)
			cout << "GOOD" << endl;
		else if (gcount < bcount)
			cout << "A BADDY" << endl;
		else
			cout << "NEUTRAL" << endl;



	}
	return 0;
}
