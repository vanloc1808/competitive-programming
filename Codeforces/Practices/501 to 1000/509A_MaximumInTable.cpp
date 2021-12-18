#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	long long a[11][11];
	for (int j = 1; j <= n; j++)
	{
		a[1][j] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		a[i][1] = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= n; j++)
		{
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	cout << a[n][n];
	return 0;
}