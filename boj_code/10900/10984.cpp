#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int subj = 0;
		cin >> subj;
		int haksum = 0;
		double sum = 0;
		for (int j = 0; j < subj; j++)
		{
			int hak = 0;
			double score = 0;
			cin >> hak >> score;
			haksum += hak;
			sum += hak * score;

		}
		cout << haksum << " ";
		printf("%.1f\n", sum / haksum);

	}
	return 0;
}
