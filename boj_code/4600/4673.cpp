#include <iostream>
using namespace std;
int main()
{
	bool *numsave = new bool[12000];
	for (int i = 0; i < 10000; i++)
		numsave[i] = true;
	for (int i = 1; i < 10000; i++)
	{
		int idu = i;
		int num = i;
		while (idu != 0)
		{
			num = num+ idu % 10;
			idu = idu / 10;
		}
		numsave[num] = false;
	}
	for (int i = 1; i < 10000; i++)
		if (numsave[i] == true)
			cout << i << endl;
	return 0;
}
