#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int h[101], a[101];
	for (int i = 1; i <= n; i++)
	{
		cin >> h[i] >> a[i];
	}
	int Count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j == i)
			{
				continue;
			}
			if (h[j]== a[i])
			{
				Count++;
			}
		}
	}
	cout << Count;
	return 0;
}