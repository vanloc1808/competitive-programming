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
		int n;
		cin >> n;
		vector<int> a;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		a.erase(unique(a.begin(), a.end()),a.end());
		cout << a.size() << "\n";
	}
	return 0;
}