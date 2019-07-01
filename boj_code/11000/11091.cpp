#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{ //97~122
	int n = 0;
	cin >> n;
	cin.ignore();
	while(n--){
		int check[123] = { 0 };
		char num[101];
		cin.getline(num, 101);
		int num_len = strlen(num);
		for (int i = 0; i < num_len; i++)
			if ('A' <= num[i] && num[i] <= 'Z') // 소문자로 변경해서 작업
				num[i] += 32;

		for (int i = 0; i < num_len; i++)
			check[(int)num[i]]++;
		int pan = 0;
		for (int i = 97; i <= 122; i++)
		{
			if (check[i] == 0 && pan == 0)
			{
				cout << "missing ";
				pan = 1;
				cout << (char)i;
			}
			else if (check[i] == 0 && pan == 1)
				cout << (char)i;
		}
		if (pan == 0)
			cout << "pangram" << endl;
		else
			cout << endl;

	}
	return 0;
}
