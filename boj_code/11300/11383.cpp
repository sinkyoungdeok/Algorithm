#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int n, m;
	cin >> n >> m;
	char **num1 = new char*[n];
	char **num2 = new char*[n];
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		num1[i] = new char[m];
		for (int j = 0; j < m; j++)
			cin >> num1[i][j];
	}
	for (int i=0; i< n; i++){
		num2[i] = new char[m * 2];
		for (int j = 0; j < m * 2; j++)
		{
			cin >> num2[i][j];
			if (num1[i][j / 2] != num2[i][j])
				check = 1;
		}
	}
	if (check == 0)
		cout << "Eyfa" << endl;
	else
		cout << "Not Eyfa" << endl;

	return 0;
}
