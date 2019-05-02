#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
	while (1)
	{
		stack<string> st;
		char num[256];
		cin.getline(num, 256);
		
		if (num[0] == '#')
			return 0;

		bool legal = 1;
		for (int i = 0; i < strlen(num); i++)
		{
			if (num[i] == '<'&& num[i+1] != '/')
			{
				string tmp;
				for (int j = i + 1; num[j] != '>'; j++)
					tmp += num[j];
				if(!(tmp[0] == 'b' && tmp[1] == 'r') && tmp[0] != 'a')
				st.push(tmp);
				if (tmp[0] == 'a')
					st.push("a");
			}
			else if (num[i] == '<' && num[i + 1] == '/')
			{
				if (st.empty())
				{
					cout << "illegal" << endl;
					legal = 0;
					break;
				}
				else {
					string tmp;
					for (int j = i + 2; num[j] != '>'; j++)
						tmp += num[j];
					if (tmp != st.top())
					{
						cout << "illegal" << endl;
						legal = 0;
						while (!st.empty())
							st.pop();
						break;
					}
					else
						st.pop();
				}
			}


		}
		if (!st.empty())
		{
			legal = 0;
			cout << "illegal" << endl;
		}
		if (legal)
			cout << "legal" << endl;



	}
	return 0;
}
