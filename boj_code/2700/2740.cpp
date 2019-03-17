#include <iostream>
using namespace std;
int main()
{
	int n1= 0;
	int m1 = 0;
	int n2 = 0;
	int m2 = 0;
	int n3 = 0;
	int m3 = 0;
	cin >> n1 >> m1;
	int **num1 = new int*[n1];
	for (int i = 0; i < n1; i++)
		num1[i] = new int[m1];
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m1; j++)
			cin >> num1[i][j];

	cin >> n2 >> m2;
	int **num2 = new int*[n2];
	for (int i = 0; i < n2; i++)
		num2[i] = new int[m2];
	for (int i = 0; i < n2; i++)
		for (int j = 0; j < m2; j++)
			cin >> num2[i][j];

	n3 = n1;
	m3 = m2;
	int **mul = new int*[n3];
	for (int i = 0; i < n3; i++)
		mul[i] = new int[m3];

	for ( int i =0; i< n3; i++) // i=n1
		for (int j = 0; j < m3; j++) // j = m2
		{
			int sum = 0;
			for (int k = 0; k < m1; k++)
				sum += num1[i][k] * num2[k][j];
			mul[i][j] = sum;
		}
	
	for (int i = 0; i < n3; i++) {
		for (int j = 0; j < m3; j++)
			cout << mul[i][j] << " ";
		cout << endl;
	}
	
	

	return 0;
}
