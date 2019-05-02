#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char num[101];
	while (cin.getline(num, 101)) {
		int num_len = strlen(num);
		char six[6] = { 'a','i','y','e','o','u' };
		char els[] = { 'b','k','x','z','n','h','d','c','w','g','p','v','j','q','t','s','r','l','m','f', };
		for (int i = 0; i < num_len; i++)
		{
			int check = 0;
			for (int j = 0; j < 6; j++)
				if (six[j] == num[i])
				{
					num[i] = six[(j + 3) % 6];
					check = 1;
					break;
				}
				else if (six[j] - 32 == num[i])
				{
					num[i] = six[(j + 3) % 6] - 32;
					check = 1;
					break;
				}
			if (check == 0)
			{
				for (int j = 0; els[j] != NULL; j++)
					if (els[j] == num[i])
					{
						num[i] = els[(j + 10) % 20];
						break;
					}
					else if (els[j] - 32 == num[i])
					{
						num[i] = els[(j + 10) % 20] - 32;
						break;
					}
			}
			cout << num[i];

		}
		cout << endl;

	}
	return 0;
}
