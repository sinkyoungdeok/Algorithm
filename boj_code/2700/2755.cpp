#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long int n = 0;
	cin >> n;
	int sum_hak = 0;
	double sum_score = 0;
	for (int i = 0; i < n; i++)
	{
		char sub[101];
		int hak = 0;
		char sc[3];
		cin >> sub >> hak >> sc;
		sum_hak += hak;
		double score = 0;
		if (sc[0] == 'A')
			score = 4;
		else if (sc[0] == 'B')
			score = 3;
		else if (sc[0] == 'C')
			score = 2;
		else if (sc[0] == 'D')
			score = 1;
		else
			score = 0;

		if (sc[0] != 'F')
		{
			if (sc[1] == '+')
				score += 0.3;
			else if (sc[1] == '-')
				score -= 0.3;
		}
		sum_score += hak * score;
	}
	double result = sum_score / sum_hak;
	result = result + 0.0001;
	printf("%.2lf\n", result);

	return 0;
}
