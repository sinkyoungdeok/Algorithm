#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int n = 0;
	cin >> a >> n;
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		string b;
		cin >> b;
		b.append(b);
		if (b.find(a) != -1)
			check++;

	}
	cout << check << endl;
	return 0;
}
