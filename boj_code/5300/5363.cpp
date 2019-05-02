#include <iostream>
#include <string.h>>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		char *num = new char[101];
		cin.getline(num, 101);
		int numlen = strlen(num);
		int check = 0;
		char *num_temp = new char[101];
		int num_temp_index = 0;
		for (int j = 0; j < numlen; j++)
		{
			if (check < 2)
				num_temp[num_temp_index++] = num[j];
			else
				cout << num[j];


			if (num[j] == ' ')
				check++;
		}
		cout << " ";
		for (int j = 0; j < num_temp_index; j++)
			cout << num_temp[j];
		cout << endl;


	}



	return 0;
}
