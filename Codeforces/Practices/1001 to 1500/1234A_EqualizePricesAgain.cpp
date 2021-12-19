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
#define Epsilon 1e-6

double findAverage(vector<int> v)
{
	int Sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		Sum += v[i];
	}
	double Average = (double(Sum)) / v.size();
	return Average;
}

int main()
{
	fastinout;
	int q;
	cin >> q;
	while (q--)
	{
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		double Aver = findAverage(v);
		int intAver = (int)Aver;
		int res;
		if (Aver - intAver <= Epsilon)
		{
			res = intAver;
		}
		else
		{
			res = intAver + 1;
		}
		cout << res << "\n";
	}
	return 0;
}