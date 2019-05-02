#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string num;
	cin >> num;
	
	//1
	cout << "..#..";
	for (int i = 2; i <= num.length(); i++)
	{
		if (i % 3 == 0)
			cout << ".*..";
		else
			cout << ".#..";
	}
	cout << endl;

	//2
	cout << ".#.#.";
	for (int i = 2; i <= num.length(); i++)
	{
		if (i % 3 == 0)
			cout << "*.*.";
		else
			cout << "#.#.";
	}
	cout << endl;

	//3
	cout << "#." << num[0] << ".#";
	for (int i = 2; i <= num.length(); i++)
	{
		if (i % 3 == 1)
			cout << "." << num[i - 1] << ".#";
		else if (i % 3 == 2)
		{
			if(i < num.length())
				cout << "." << num[i - 1] << ".*";
			else
				cout << "." << num[i - 1] << ".#";
		}
		else
			cout << "." << num[i - 1] << ".*";
	}
	cout << endl;



	//4
	cout << ".#.#.";
	for (int i = 2; i <= num.length(); i++)
	{
		if (i % 3 == 0)
			cout << "*.*.";
		else
			cout << "#.#.";
	}
	cout << endl;


	//5
	cout << "..#..";
	for (int i = 2; i <= num.length(); i++)
	{
		if (i % 3 == 0)
			cout << ".*..";
		else
			cout << ".#..";
	}
	cout << endl;

	return 0;
}
