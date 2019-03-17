#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 3; i++)
	{
		char *num = new char[8];
		cin >> num;
		int check = (int)num[0];
		int cnt = 1;
		int cntmax = 0;
		for (int j = 1; j < 8; j++)
		{
			if (check == num[j])
				cnt++;
			else
			{
				check = num[j];
				if (cntmax < cnt)
					cntmax = cnt;
				cnt = 1;
			}

		}
		if (cntmax < cnt)
			cntmax = cnt;
		cout << cntmax << endl;
	}


	return 0;
}
