#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	int i = 1;
	int six = 1;
	int check = 1;
	while (1)
	{
		if (i >= num)
			break;
		else
		{
			i = i + (six * 6);
			six++;
			check++;
		}
	}
	cout << check << endl;
	return 0;
}
