/* 91-year anniversary of the foundation of Communist Party of Vietnam
03/02/1930 - 03/02/2021 */

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
	int n, x;
	cin >> n >> x;
	ll left = x, distress = 0;
	for (int i = 1; i <= n; i++)
	{
		char ope;
		int d;
		cin >> ope >> d;
		if (ope == '-')
		{
			if (left < d)
			{
				distress++;
			}
			else
			{
				left -= d;
			}
		}
		else
		{
			left += d;
		}
	}
	cout << left << " " << distress;
	return 0;
}