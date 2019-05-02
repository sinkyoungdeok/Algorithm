#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char * num = new char[101];
	while (cin.getline(num, 101))
	{
		int numlen = strlen(num);
		int check = 0;
		while (check == 0) {
			check = 1;
			for (int i = 0; i < numlen; i++)
			{
				if (num[i] == 'B') {
					int i2 = i + 1;
					while (num[i2] == NULL)
						i2++;
					if (num[i2] == 'U') {
						int i3 = i2 + 1;
						while (num[i3] == NULL)
							i3++;
						if (num[i3] == 'G')
						{
							num[i] = NULL;
							num[i2] = NULL;
							num[i3] = NULL;
							check = 0;
							i += 2; continue;
						}
					}
				}

			}
		}
		for (int i = 0; i < numlen; i++)
		{
			if(num[i] != NULL)
			cout << num[i];
		}
		cout << endl;
	}


	return 0;
}
