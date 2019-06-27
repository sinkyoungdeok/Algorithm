#include <iostream>
#include <cstdio>
using namespace std;
int num[20000002];
int main()
{
	int n = 0;
	scanf("%d", &n);
	int card = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card);
		if (card >= 0)
			num[card]++;
		else
			num[10000000 - card]++;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card);
		if (card >= 0)
		{
			if (num[card] == 0)
				printf("0 ");
			else
				printf("1 ");
		}
		else{
			if (num[10000000 - card] == 0)
				printf("0 ");
			else
				printf("1 ");
		}
	}
	printf("\n");
	
	return 0;
}
