#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		char num[1001];
		cin.getline(num, 1001);
		int vowels = 0;
		int consnonants = 0;
		for (int i = 0; i < strlen(num); i++)
		{
			if (('a' <= num[i] && num[i] <= 'z') || ('A' <= num[i] && num[i] <= 'Z'))
			{
				if (num[i] == 'a' || num[i] == 'e' || num[i] == 'i' || num[i] == 'o' || num[i] == 'u' || num[i] == 'A' || num[i] == 'E' || num[i] == 'I' || num[i] == 'O' || num[i] == 'U')
					vowels++;
				else
					consnonants++;
			}

		}
		cout << consnonants << " " << vowels << endl;

	}
	return 0;
}
