#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *num = new char[100];
	cin.getline(num, 100);
	while (1)
	{
		if (num[0] == 'E' && num[1] == 'O' && num[2] == 'I')
			break;
		int numlen = strlen(num);
		int check = 0;
		for (int i = 0; i < numlen; i++)
		{
			if(num[i] == 'n'|| num[i] =='N')
				if(num[i+1] == 'e' || num[i+1] == 'E')
					if( num[i+2] == 'm' || num[i+2] == 'M')
						if (num[i + 3] == 'o' || num[i + 3] == 'O')
						{
							check = 1;
							break;
						}
		}
		if (check == 1)
			cout << "Found" << endl;
		else
			cout << "Missing" << endl;
		
		cin.getline(num, 100);
	}
	
	return 0;
}
