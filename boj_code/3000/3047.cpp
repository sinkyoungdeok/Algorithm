#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int *n = new int[3];
	cin >> n[0] >> n[1] >> n[2];
	sort(n,n+3);
	char *num = new char[3];
	cin >> num;
	for (int i = 0; i < 3; i++)
	{
		if (num[i] == 'A')
			cout << n[0] << " ";
		else if (num[i] == 'B')
			cout << n[1] << " ";
		else if (num[i] == 'C')
			cout << n[2] << " ";
	}
	return 0;
}
