#include <iostream>
#include <string>
using namespace std;
class Queue
{
private:
	int front;
	int back;
	int *num;
public:
	Queue()
	{
		this->num = new int[10000];
		this->back = -1;
		this->front = 0;
	}
	~Queue()
	{
		delete[] num;
	}
	void push(int a)
	{
		num[++back] = a;
	}
	void pop()
	{
		if (back + 1 == front)
			cout << "-1" << endl;
		else
		{
			cout << num[front] << endl;
			front++;
		}
	}
	void size()
	{
		cout << back - front + 1 << endl;
	}
	void empty()
	{
		if (back - front == -1)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	void mfront()
	{
		if (back - front == -1)
			cout << "-1" << endl;
		else
		{
			cout << num[front] << endl;
		}
	}
	void mback()
	{
		if (back - front == -1)
			cout << "-1" << endl;
		else
		{
			cout << num[back] << endl;
		}
	}
};

int main()
{
	int n = 0;
	cin >> n;
	Queue qu;
	for (int i = 0; i < n; i++)
	{
		string manda;
		cin >> manda;
		if (manda == "push")
		{
			int a = 0;
			cin >> a;
			qu.push(a);
		}
		else if (manda == "front")
			qu.mfront();
		else if (manda == "back")
			qu.mback();
		else if (manda == "size")
			qu.size();
		else if (manda == "empty")
			qu.empty();
		else if (manda == "pop")
			qu.pop();
	}









	return 0;
}
