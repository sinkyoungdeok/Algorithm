#include <iostream>
#include <cmath>
#include <string>
#include <queue>
using namespace std;
int main()
{
	while (1)
	{
		string num;
		cin >> num;
		if (num == "end")
			break;

		int vowel_check = 0; // 모음
		int consonant = 0; //자음갯수
		int vowel = 0;//모음갯수
		bool no= 0;
		for (int i = 0; i < num.length(); i++)
		{
			if (num[i] == 'a' || num[i] == 'e' || num[i] == 'i' || num[i] == 'o' || num[i] == 'u')
			{
				vowel_check = 1;
				vowel++;
				consonant = 0;
				if (vowel == 3)
				{
					cout << "<" << num << "> is not acceptable." << endl;
					no = 1;
					break;
				}
			}
			else
			{
				vowel = 0;
				consonant++;
				if (consonant == 3)
				{
					cout << "<" << num << "> is not acceptable." << endl;
					no = 1;
					break;
				}
			}
			if (i != 0)
			{
				if ((num[i] == 'e' && num[i - 1] == 'e') || (num[i] == 'o' && num[i - 1] == 'o'));
				else if (num[i] == num[i - 1])
				{
					cout << "<" << num << "> is not acceptable." << endl;
					no = 1;
					break;
				}

			}


		}
		if(vowel_check ==0 && no==0)
			cout << "<" << num << "> is not acceptable." << endl;
		else if(no == 0 && vowel_check ==1)
			cout << "<" << num << "> is acceptable." << endl;

	}
	return 0;
}
