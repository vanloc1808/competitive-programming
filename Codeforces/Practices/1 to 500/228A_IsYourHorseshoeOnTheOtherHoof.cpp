#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int s[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
	}
	int Count = 0;
	sort(s, s + 4);
	for (int i = 0; i < 3; i++)
	{
		if (s[i] == s[i + 1])
		{
			Count++;
		}
	}
	cout << Count;
}