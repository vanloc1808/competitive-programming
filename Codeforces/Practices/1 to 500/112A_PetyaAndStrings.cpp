#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			str1[i] -= 32;
		}
	}
	for (int i = 0; i < str2.length(); i++)
	{
		if (str2[i] >= 'a' && str2[i] <= 'z')
		{
			str2[i] -= 32;
		}
	}
	if (str1 < str2)
	{
		cout << -1;
	}
	else if (str1 == str2)
	{
		cout << 0;
	}
	else
	{
		cout << 1;
	}
}

