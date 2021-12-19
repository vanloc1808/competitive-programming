#include <iostream>
#include <vector>
#include <set>
#include <concurrent_priority_queue.h>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name."inp", "r", stdin); freopen_s(&fo, name."out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e17

int main()
{
	fastinout;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(101, 0);
		for (int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			a[x]++;
		}
		int maxValue = a[0];
		for (int i = 1; i <= 100; i++)
		{
			if (a[i] > maxValue)
			{
				maxValue = a[i];
			}
		}
		cout << maxValue << "\n";
	}
	return 0;
}

