#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()//97~122
{
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		char name[35] ="";
		cin.getline(name, 35);
		if(name[0]>=97)
		name[0] -= 32;
		cout << name << endl;
	}

	return 0;
}
