#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	int num = 0;
	int search = 0;
	scanf("%d %d", &num, &search);
	int *anum = new int[num];
	for (int i = 0; i < num; i++)
		scanf("%d", &anum[i]);
	sort(anum, anum + num);

	printf("%d", anum[search - 1]);
	delete[]anum;

	return 0;
}
