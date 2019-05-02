#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main()
{
	while (1)
	{
		string num;
		getline(cin, num);

		if (num[0] == '.')
			break;

		stack<char> st;
		bool yesorno = true;
		for (int i = 0; i < num.length(); i++)
		{
			if (num[i] == '(' || num[i] == '[')
				st.push(num[i]);
			else if (num[i] == ')' || num[i] == ']')
			{
				if (st.empty())
				{
					yesorno = false;
					break;
				}
				char tmp = st.top();
				st.pop();
				if(num[i] == ')')
					if (tmp != '(')
					{
						yesorno = false;
						break;
					}
				if(num[i] == ']')
					if (tmp != '[')
					{
						yesorno = false;
						break;
					}


			}


		}
		if (!st.empty())
			yesorno = false;


		if (yesorno)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}

	return 0;
}
