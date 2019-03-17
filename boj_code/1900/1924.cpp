#include <iostream>
using namespace std;
int main()
{
	int a = 0,b=0;
	int check = 0;
	cin >> a >> b;
	if (1 <= a && a <= 12 && 1 <= b && b <= 31)
	{
		if (a != 1)
		{
			for (int i = 1; i < a; i++)
			{
				if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
					check += 31;
				if (i == 4 || i == 6 || i == 9 || i == 11)
					check += 30;
				if (i == 2)
					check += 28;
			}
		}
		check += b;


	}
	switch (check % 7)
	{
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	}


	//system("pause");
	return 0;
}
