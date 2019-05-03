#include <cstdio>
#include <cctype>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, char> M;
	M[".-"] = 'A';
	M["-..."] = 'B';
	M["-.-."] = 'C';
	M["-.."] = 'D';
	M["."] = 'E';
	M["..-."] = 'F';
	M["--."] = 'G';
	M["...."] = 'H';
	M[".."] = 'I';
	M[".---"] = 'J';
	M["-.-"] = 'K';
	M[".-.."] = 'L';
	M["--"] = 'M';
	M["-."] = 'N';
	M["---"] = 'O';
	M[".--."] = 'P';
	M["--.-"] = 'Q';
	M[".-."] = 'R';
	M["..."] = 'S';
	M["-"] = 'T';
	M["..-"] = 'U';
	M["...-"] = 'V';
	M[".--"] = 'W';
	M["-..-"] = 'X';
	M["-.--"] = 'Y';
	M["--.."] = 'Z';

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cout << "Case " << i << ": ";
		for (int i = 0; i < 5; i++)
		{
			string num;
			cin >> num;
			cout << M[num];
		}
		cout << endl;
	}
	return 0;
}
