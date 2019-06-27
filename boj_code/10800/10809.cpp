#include <iostream>
using namespace std;
int main()
{ // 알파벳a =아스키 97 /  z=아스키122
	char *num = new char[100];
	int *ascii = new int[130];
	cin >> num;
	
	for (int i = 97; i < 123; i++)
		ascii[i] = -1;
	for (int i = 0; num[i] != 0; i++)
		if(ascii[(int)num[i]] == -1)
		ascii[(int)num[i]] = i;
	for (int i = 97; i < 123; i++)
		cout << ascii[i] << " ";
	
	return 0;
}
