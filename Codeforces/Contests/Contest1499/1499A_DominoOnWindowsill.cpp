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
 
void solve(int n, int k1, int k2, int w, int b, bool& able)
{
    int minK = min(k1, k2);
    int restW = abs(k1 - k2);
    int minB = min(n - k1, n - k2);
    int restB = restW;
    if ((minK + restW / 2 >= w) && (minB + restB / 2 >= b))
    {
        able = true;
    }
    else
    {
        able = false;
    }
 
}
 
int main()
{
	fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int w, b;
        cin >> w >> b;
        bool able;
        solve(n, k1, k2, w, b, able);
        if (able)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
