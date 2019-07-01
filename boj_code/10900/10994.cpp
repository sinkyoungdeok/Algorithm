#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		cout << "*" << endl;
	}
	else {
		int rows = 1 + (n-1) * 4;
		int mid_rows = rows;
		int mid_rows_2 = rows;
		for (int i = 1; i <= rows; i++)
		{
			if (i == 1 || i == rows)
				for (int k = 1; k <= rows; k++)
					cout << "*";
			else
			{
				cout << "* ";
				if (i % 2 == 1)
				{
					if (i <= (rows+1)/ 2)
						mid_rows -= 4;
					else if (i > rows/2)
						mid_rows += 4;
					for (int k = 1; k < (rows - mid_rows) / 4; k++)
						cout << "* ";
					for (int k = 1; k <= mid_rows; k++)
						cout << "*";
					for (int k = 1; k < (rows - mid_rows) / 4; k++)
						cout << " *";

					cout << " *";
				}
				else
				{
					if (i <= rows / 2)
						mid_rows_2 -= 4;
					else if(i > (rows+3) / 2)
						mid_rows_2 += 4;
					for (int k = 1; k <(rows- mid_rows_2)/4; k++)
						cout << "* ";
					for (int k = 1; k <= mid_rows_2; k++)
						cout << " ";
					for (int k = 1; k <(rows- mid_rows_2) / 4; k++)
						cout << " *";


					cout << " *";


				}
			}
			cout << endl;
		}


	}

	return 0;
}
