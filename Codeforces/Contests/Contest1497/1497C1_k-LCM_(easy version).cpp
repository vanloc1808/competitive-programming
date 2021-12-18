#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
//#include <concurrent_priority_queue.h>
#include <string>
#include <cstring>
#include <cmath>
#include <chrono>
#include <climits>
#include <cfloat>
#include <complex>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <iomanip>
/*
#include <ranges>
#include <bit>
#include <numeric>
#include <numbers>
*/
 
using namespace std;
 
typedef unsigned long long ull;
typedef unsigned int ui;
typedef long long ll;
typedef float fl;
typedef double db;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
#define name ""
#define iof FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", stdout)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define Inf 1e10
#define Mod 1e9 + 7
#define Pi acos(-1.00)
#define Eps 1e-6
 
template<class T>
T minOfThree(T a, T b, T c);
 
template<class T>
T maxOfThree(T a, T b, T c);
 
template<class T>
T minOfArray(vector<T> a);
 
template<class T>
T maxOfArray(vector<T> a);
 
template<class T>
bool isPrime(T n);
 
int main()
{
	fastio;
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		if (n % 2 == 1)
		{
			cout << n / 2 << " " << n / 2 << " " << 1;
		}
		else if ((n / 2) % 2 == 0)
		{
			cout << n / 2 << " " << n / 4 << " " << n / 4;
		}
		else
		{
			cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2;
		}
		cout << "\n";
	}
	return 0;
}