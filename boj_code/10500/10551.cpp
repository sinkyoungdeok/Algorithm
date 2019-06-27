#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int check[8] = { 0 };
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == '1' || num[i] == 'Q' || num[i] == 'A' || num[i] == 'Z')
			check[0]++;
		else if (num[i] == '2' || num[i] == 'W' || num[i] == 'S' || num[i] == 'X')
			check[1]++;
		else if (num[i] == '3' || num[i] == 'E' || num[i] == 'D' || num[i] == 'C')
			check[2]++;
		else if (num[i] == '4' || num[i] == '5' || num[i] == 'R' || num[i] == 'T'|| num[i] == 'F' || num[i] == 'G' || num[i] == 'V' || num[i] == 'B')
			check[3]++;
		else if (num[i] == '6' || num[i] == '7' || num[i] == 'Y' || num[i] == 'U' || num[i] == 'H' || num[i] == 'J' || num[i] == 'M' || num[i] == 'N')
			check[4]++;
		else if (num[i] == '8' || num[i] == 'I' || num[i] == 'K' || num[i] == ',')
			check[5]++;
		else if (num[i] == '9' || num[i] == 'O' || num[i] == 'L' || num[i] == '.')
			check[6]++;
		else 
			check[7]++;

	}
	for (int i = 0; i < 8; i++)
		cout << check[i] << endl;

	return 0;
}
