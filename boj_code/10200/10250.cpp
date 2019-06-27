#include <iostream>
using namespace std;
int main()
{
	int size = 0;
	cin >> size;
	for (int k = 0; k < size; k++)
	{
		int height = 0;
		int width = 0;
		int num = 0;
		int check = 1;
		cin >> height >> width >> num;
		for(int w=1;w<=width;w++)
			for (int h = 1; h <= height; h++)
			{
				if (check == num && w < 10)
					cout << h << "0" << w << endl;
				else if (check == num && w >= 10)
					cout << h << w << endl;
					
				check++;
			}

	}
	return 0;
}
