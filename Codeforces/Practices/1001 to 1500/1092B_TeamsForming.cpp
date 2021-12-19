#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <concurrent_priority_queue.h>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <complex>
#include <bitset>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e17
#define Epsilon 1e-6

int main()
{
	fastinout;
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
	int total(0);
	for (int i = 0; i < n - 1; i += 2)
	{
		total += a[i + 1] - a[i];
	}
	cout << total << "\n";
	return 0;
}
