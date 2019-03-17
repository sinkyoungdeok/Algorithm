#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n[10];
	for (int i = 0; i < 10; i++)
		cin >> n[i];
	for (int i = 0; i < 10; i++)
	{
		int dup_sum = sum;
		int num = 0;
		num = n[i];
		sum += num;
		if (sum >= 100)
		{
			if (sum - 100 <= 100 - dup_sum)
				cout << sum << endl;
			else  
				cout << dup_sum << endl;
			return 0;
		}
	}
    cout << sum << endl;// 100점을 가지 못했을때의 출력을 빼먹어서 틀렸었음. 이부분만 추가해서 맞음

	return 0;
}
