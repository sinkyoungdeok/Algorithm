#include <iostream>
#include <string>
using namespace std;
class Stack
{
private:
	int *array;
public:
	int top;
	Stack()
	{
		top = -1;
		array = new int[51];
	}
	void push(int num)
	{
		array[++top] = num;
	}
	int pop()
	{
		if (top == -1)
			return 0; // pop실패
		else {
			array[top--] = 0;
			return 1; // pop성공
		}
	}

};
int main()
{
	int n = 0;
	cin >> n;
	Stack *st = new Stack[n];
	for (int i = 0; i < n; i++)
	{
		char *ex = new char[50];
		string check="YES";
		cin >> ex;
		for (int j = 0; ex[j] != NULL; j++)
		{
			if (ex[j] == '(')
				st[i].push(1);
			else if (ex[j] == ')' && st[i].pop() == 0)
				check = "NO";

		}
		if (check == "NO" || st[i].top != -1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		delete[]ex;
	}

	return 0;
}
