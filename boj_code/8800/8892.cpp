#include <iostream>
#include <cmath>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		string *num = new string[n];
		for (int i = 0; i < n; i++)
			cin >> num[i];
		bool pal = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j) {
					string tmp = num[i] + num[j];
					int endk = tmp.length() - 1;
					bool check = 0;
					for (int k = 0; k < tmp.length() / 2; k++, endk--)
					{
						if (tmp[k] != tmp[endk])
						{
							check = 1;
							break;
						}
					}
					if (check == 0)
					{
						cout << tmp << endl;
						pal = 1;
						break;
					}
				}
			}
			if (pal == 1)
				break;
		}
		if (pal == 0)
			cout << "0" << endl;

	}


	return 0;
}
