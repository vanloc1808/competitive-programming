#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	bool check = true;
	if (s.length() != t.length())
	{
		check = false;
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != t[s.length() - i - 1])
			{
				check = false;
			}
		}
	}
	if (check == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
