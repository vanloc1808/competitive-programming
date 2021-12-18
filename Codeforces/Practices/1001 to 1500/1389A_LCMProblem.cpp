#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
	fastinout;
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		int x = l, y = 2 * l;
		if (y > r)
		{
			cout << -1 << " " << -1 << "\n";
		}
		else
		{
			cout << x << " " << y << "\n";
		}
	}
	return 0;
}