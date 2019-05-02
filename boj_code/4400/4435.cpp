#include <iostream>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int *gan = new int[6];
		int *sau = new int[7];
		int gan_score[6] = { 1,2,3,3,4,10 };
		int sau_score[7] = { 1,2,2,2,3,5,10 };
		int gansum = 0;
		int sausum = 0;
		for (int j = 0; j < 6; j++)
		{
			cin >> gan[j];
			gansum += gan[j] * gan_score[j];
		}
		for (int j = 0; j < 7; j++)
		{
			cin >> sau[j];
			sausum += sau[j] * sau_score[j];
		}
		
		if (gansum > sausum)
			cout << "Battle " << i + 1 << ": Good triumphs over Evil" << endl;
		else if (gansum < sausum)
			cout << "Battle " << i + 1 << ": Evil eradicates all trace of Good" << endl;
		else
			cout << "Battle " << i + 1 << ": No victor on this battle field" << endl;
	}
	return 0;
}
