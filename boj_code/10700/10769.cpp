#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *n = new char[300];
	cin.getline(n, 300);
	int happy = 0;
	int sad = 0;
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] == ':' && n[i + 1] == '-' && n[i + 2] == ')')
		{
			happy++;
		}
		else if (n[i] == ':' && n[i + 1] == '-' && n[i + 2] == '(')
		{
			sad++;
		}
	}
	if (happy == 0 && sad == 0)
		cout << "none" << endl;
	else if (happy == sad)
		cout << "unsure" << endl;
	else if (happy > sad)
		cout << "happy" << endl;
	else if (happy < sad)
		cout << "sad" << endl;
	return 0;
}
