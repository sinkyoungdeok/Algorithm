#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		char c;
		int num_check[30] = { 0 };
		while (1)
		{
			scanf("%c",&c);
			if (c == '\n')
				break;
			if ('a' <= c && c <= 'z')
				c -= 32;
			if ('A' <= c && c <= 'Z')
				num_check[c - 'A']++;
		}
		
		int min = 1000000;
		for (int i = 0; i < 26; i++)
			if (min > num_check[i])
				min = num_check[i];
		if (min == 0)
			cout << "Case "<<i+1<<": Not a pangram" << endl;
		else if (min == 1)
			cout << "Case "<< i + 1 <<": Pangram!" << endl;
		else if (min == 2)
			cout << "Case " << i + 1 << ": Double pangram!!" << endl;
		else
			cout << "Case " << i + 1 << ": Triple pangram!!!" << endl;


	}
	
	return 0;
}
