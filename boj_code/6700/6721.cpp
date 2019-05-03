#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0; // 테스트케이스 개수
	string str1, str2;
	int num1 = 0, num2 = 0;
	string sum_str;
	int sum = 0;
	int idx = 0; // sun_str에서 0이 아닌 숫자가 처음으로 나오는 위치. 

	cin >> n;
	string *result = new string[n];


	for (int i = 0; i < n; i++)
	{
		cin >> str1 >> str2;
		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());
		num1 = stoi(str1);
		num2 = stoi(str2);
		sum = num1 + num2;
		sum_str = to_string(sum);
		reverse(sum_str.begin(), sum_str.end());

		cout << stoi(sum_str) << endl;

	}
	delete[] result;
}
