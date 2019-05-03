#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
int main()
{
	for (int i = 1000; i <= 9999; i++)
	{
		int tensum = 0;
		int twesum = 0;
		int sixsum = 0;

		int dup = i;
		while (dup)
		{
			tensum += dup % 10;
			dup /= 10;
		}
		dup = i;
		while (dup)
		{
			twesum += dup % 12;
			dup /= 12;
		}
		dup = i;
		while (dup)
		{
			sixsum += dup % 16;
			dup /= 16;
		}
		if (tensum == twesum && tensum == sixsum)
			cout << i << endl;
	}
	return 0;
}
