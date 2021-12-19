#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef float fl;
typedef double db;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
#define name ""
#define iof freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back()
#define pfr push_front
#define pofr pop_front
#define Inf 1e10
#define Mod 1e9 + 7
#define Pi acos(-1.00)
#define Eps 1e-6
 
template <class T>
T minOfThree(T a, T b, T c);
 
template<class T>
T maxOfThree(T a, T b, T c);
 
template<class T>
bool isPrime(T n);
 
template<class T>
T minOfVector(vector<T> v);
 
template<class T>
T maxOfThree(vector<T> v);
 
int main()
{
	fastio;
	int t;
	cin >> t;
	while(t--)
    {
        /*int n, u, v;
        cin >> n >> v >> u;
        vi a(n);
        for (int& x : a)
        {
            cin >> x;
        }
        int cost1 = 0, cost2 = 0;
        if (a[1] == a[0])
        {
            cost1 += u + v;
        }
        else
        {
            cost1 += v;
        }
        if (a[n - 1] == a[n - 2])
        {
            cost2 += u + v;
        } else
        {
            cost2 += v;
        }
        int cost = min(cost1, cost2);
        cout << cost << "\n";
        */
        int n, u, v;
        cin >> n >> v >> u;
        vi a(n);
        for (int& x : a)
        {
            cin >> x;
        }
        int nxt = a[0];
        int maxValue = 0;
        int i = 1;
        while(i < n)
        {
            maxValue = max(maxValue, abs(a[i] - nxt));
            nxt = a[i];
            i++;
        }
        int res;
        if (maxValue == 0)
        {
            res = u + min(u, v);
        }
        else if (maxValue == 1)
        {
            res = min(u, v);
        }
        else
        {
            res = 0;
        }
        cout << res << "\n";
    }
    return 0;
 
}