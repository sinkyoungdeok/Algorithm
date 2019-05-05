#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int s = 0;
		cin >> s;
		int n = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int q = 0;
			int p = 0;
			cin >> q >> p;
			s += q * p;
		}

		cout << s << endl;




	}
	return 0;
}
