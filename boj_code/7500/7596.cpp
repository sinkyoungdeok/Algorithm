#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int cnt = 0;
	while (1)
	{
		cnt++;
		int n = 0;
		cin >> n;
		if (n == 0)
			break;
		cin.ignore();
		string *num = new string[n];
		for (int i = 0; i < n; i++)
			getline(cin, num[i]);
		sort(num, num + n);
		cout << cnt << endl;
		for (int i = 0; i < n; i++)
			cout << num[i] << endl;

	}

	return 0;
}
