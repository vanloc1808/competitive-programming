#include <iostream>

using namespace std;

#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
	fastinout;
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int h, m;
		cin >> h >> m;
		int minuteNow = h * 60 + m;
		int minuteLeft = 24 * 60 - minuteNow;
		cout << minuteLeft << "\n";
	}
	return 0;
}