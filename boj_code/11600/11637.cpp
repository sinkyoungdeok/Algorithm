#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int n = 0;
	cin >> n;
	while (n--)
	{
		int num = 0;
		cin >> num;
		int *peo = new int[num];
		int max = 0;
		int sum = 0;
		int max_num = 0;
		int max_index = 0;
		for (int i = 0; i < num; i++)
		{
			cin >> peo[i];
			sum += peo[i];
			if (max < peo[i])
				max = peo[i];
		}
		for (int i = 0; i < num; i++)
		{
			if (max == peo[i])
			{
				max_num++;
				max_index = i + 1;
			}
		}
		if (max_num >= 2)
		{
			cout << "no winner" << endl;
			continue;
		}
		
		if (max > sum / 2)
			cout << "majority winner " << max_index << endl;
		else
			cout << "minority winner " << max_index << endl;


	}

	return 0;
}
