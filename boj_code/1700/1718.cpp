#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	string plain;
	string cipher;
	getline(cin, plain);
	getline(cin, cipher);
	int cipher_i = 0;
	for (int i = 0; i < plain.length(); i++)
	{
		if (cipher_i == cipher.length())
			cipher_i = 0;
		if (plain[i] == ' ')
		{
			cout << " ";
			cipher_i++;
			continue;
		}
		char crypto = (char)(plain[i] - (cipher[cipher_i++] - 'a' +1));
		if (crypto < 'a')
			crypto += 'z' - 'a' +1;
		cout << crypto;
	}
	return 0;
}
