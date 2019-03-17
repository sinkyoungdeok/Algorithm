#include <iostream>
using namespace std;
int main()
{ 
	for (int i = 0; i < 3; i++)
	{
		int *a = new int[4];
		for (int j = 0; j < 4; j++)
			cin >> a[j];
		int check = 0;
		for (int j = 0; j < 4; j++)
			if (a[j] == 0)
				check++;

		if (check == 0) // 모
			cout << "E" << endl;
		else if (check == 1) // 도
			cout << "A" << endl;
		else if (check == 2) // 개
			cout << "B" << endl;
		else if (check == 3) // 걸
			cout << "C" << endl;
		else if (check == 4) // 윷
			cout << "D" << endl;



	}
	return 0;
}
