#include <iostream>
using namespace std;
int main()
{	
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		char * a = new char[80];
		int score = 0;
		int check = 1;
		cin >> a;
		for (int i = 0; a[i] != NULL; i++) //OX나오는거 확인됨
		{
			if (a[i] == 'O')
			{
				score += check;
				check++;
			}
			else if (a[i] == 'X')
			{
				check = 1;
			}

		}

		cout << score << endl;
		delete[] a;
		
	}
	return 0;
}
