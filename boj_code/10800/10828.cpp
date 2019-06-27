#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int *stack = new int[10000];
	int top = -1;
	for (int i = 0; i < num; i++)
	{
		string a;
		cin >> a;
		int pushnum = 0;
		if (a == "push")
		{
			cin >> pushnum;
			stack[++top] = pushnum;
		}
		else if (a == "top")
		{
			if (top != -1)
			{
				cout << stack[top] << endl;
			}
			else
				cout << "-1" << endl;
		}
		else if (a == "size")
			cout << top+1 << endl;
		else if (a == "empty")
			if (top == -1)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		else if (a == "pop")
		{
			if (top == -1)
				cout << "-1" << endl;
			else
			{
				cout << stack[top] << endl;
				top--;
			}
		}

		


	}

	return 0;
}
