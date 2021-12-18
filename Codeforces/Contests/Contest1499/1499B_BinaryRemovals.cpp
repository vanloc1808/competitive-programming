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
 
const int INF = 100000;
 
int main()
{
	fastio;
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vi dp(s.length(), - INF);
        dp[0] = 1;
        if (s[0] <= s[1])
        {
            dp[1] = 2;
        }
        else
        {
            dp[1] = 1;
        }
        for (int i = 2; i <s.length(); i++)
        {
            if (s[i - 1] <= s[i])
            {
                dp[i] = max(dp[i], dp[i - 1] + 1);
            }
            if (s[i - 2] <= s[i])
            {
                dp[i] = max(dp[i], dp[i - 2] + 1);
            }
        }
        if (dp[s.length() -1] > 0 || dp[s.length() - 2] > 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
 
    }
    return 0;
}