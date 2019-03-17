#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string num;
		cin >> num;
		int ttt=0, tth=0, tht=0, thh=0, htt=0, hth=0, hht=0, hhh = 0;
		for (int i = 0; i <= 37; i++)
		{
			if (num[i] == 'T' && num[i + 1] == 'T' && num[i + 2] == 'T')
				ttt++;
			else if (num[i] == 'T' && num[i + 1] == 'T' && num[i + 2] == 'H')
				tth++;
			else if (num[i] == 'T' && num[i + 1] == 'H' && num[i + 2] == 'T')
				tht++;
			else if (num[i] == 'T' && num[i + 1] == 'H' && num[i + 2] == 'H')
				thh++;
			else if (num[i] == 'H' && num[i + 1] == 'T' && num[i + 2] == 'T')
				htt++;
			else if (num[i] == 'H' && num[i + 1] == 'T' && num[i + 2] == 'H')
				hth++;
			else if (num[i] == 'H' && num[i + 1] == 'H' && num[i + 2] == 'T')
				hht++;
			else if (num[i] == 'H' && num[i + 1] == 'H' && num[i + 2] == 'H')
				hhh++;

		}
		cout << ttt << " " << tth << " " << tht << " " << thh << " " << htt << " " << hth << " "<< hht << " " << hhh << endl;
	}
	return 0;
}
