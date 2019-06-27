#include <iostream>
using namespace std;

int main() {
	int N, M, count[101] = { 0 };
	cin >> N >> M;
	while (M--) {
		int i, j, k;
		cin >> i >> j >> k;
		for (; i <= j; i++)
			count[i] = k;
	}
	for (int i = 1; i <= N; i++)
		cout << count[i] << " ";
    cout << endl;
	return 0;
}
