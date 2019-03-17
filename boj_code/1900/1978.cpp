#include <iostream>
using namespace std;
int main()
{
	
	int size = 0;
	cin >> size;
	int *num = new int[size];
	int check_2 = 0;
	for (int n = 0; n < size; n++)
	{
		int check = 0;
		cin >> num[n];
		if (num[n] == 1)
			check = 1;
		else if (num[n] == 2)
			check = 0;
		else  {
			for (int i = 2; i < num[n]; i++)
			{
				if ((num[n] % i) == 0)
					check++;
			}
		}
		
		if (check >= 1) {
			check_2++;
		}
	}
	cout <<  size - check_2 << endl;
	return 0;
}
