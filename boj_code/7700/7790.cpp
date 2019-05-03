#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char num[1000001];
	int check = 0;
	while (cin.getline(num, 1000001))
	{
		int num_len = strlen(num);
		for (int i = 0; i < num_len; i++)
		{
			if (num[i] == 'j' && num[i + 1] == 'o' && num[i + 2] == 'k' && num[i + 3] == 'e')
				check++;

		}


	}
	cout << check << endl;
	return 0;
}
