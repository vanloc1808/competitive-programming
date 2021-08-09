#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inoutfile freopen_s(*fi,"name.inp","r",stdin); freopen_s(*fo,"name.out","w",stdout)

int main()
{
	fastinout;
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int floor;
		if (n <= 2)
		{
			floor = 1;
		}
		else if (n <= x + 2)
		{
			floor = 2;
		}
		else
		{
			floor = (n - 3) / x + 2;
		}
		cout << floor << "\n";
	}
	return 0;
}