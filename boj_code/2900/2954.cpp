#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
	char *num = new char[101];
	cin.getline(num, 101);
	int numlen = strlen(num);
	for (int i = 0; i < numlen; i++)
	{
		if (num[i] == 'a' || num[i] =='e' || num[i] =='i' || num[i] =='o' || num[i] =='u')
		{
			cout << num[i];
			i += 2;
			continue;
		}
		cout << num[i];
	}
	cout << endl;


	
	return 0;
}
