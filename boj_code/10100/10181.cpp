#include <cstdio>
#include <cctype>
#include <iostream>
#include <queue>
using namespace std;

int main() 
{
	while (true)
	{
		queue<int> qu;
		int num = 0;
		cin >> num;
		if (num == -1)
			return 0;
		int sum = 1;
		for(int i=2; i<=num/2;i++)
			if (num%i == 0)
			{
				sum += i;
				qu.push(i);
			}
		if (sum != num)
			cout << num << " is NOT perfect." << endl;
		else {
			cout << num << " = 1 ";
			while (!qu.empty())
			{
				cout << "+ " << qu.front() << " ";
				qu.pop();
			}
			cout << endl;
		}
	}


	return 0;
}
