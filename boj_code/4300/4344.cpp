#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int stn = 0;
		cin >> stn;
		int *score = new int[stn];
		int sum = 0;
		float aver = 0;
		int averover = 0;
		float aver2 = 0;
		for (int j = 0; j < stn; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		aver = (float)sum / stn;
		for (int j = 0; j < stn; j++)
		{
			if (aver < score[j])
				averover++;
		}
		aver2 = ((float)averover / stn)*100;


		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(3);
		cout << aver2 <<"%"<< endl;
	}
	return 0;
}
