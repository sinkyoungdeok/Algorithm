#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;
		string tmpa = a;
		string tmpb = b;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (a == b)
			cout << tmpa << " & " << tmpb << " are anagrams." << endl;
		else
			cout << tmpa << " & " << tmpb << " are NOT anagrams." << endl;

	}


	return 0;
}
