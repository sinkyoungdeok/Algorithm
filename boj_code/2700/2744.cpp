#include <iostream>
using namespace std;
int main()
{
	char *num = new char[101];
	cin >> num;

	for (int i = 0; num[i] != NULL; i++)
	{
		if ('a' <= num[i] && num[i] <= 'z')
			num[i] -= 32;
		else if ('A' <= num[i] && num[i] <= 'Z')
			num[i] += 32;
	}
	cout << num << endl;
	return 0;
}
