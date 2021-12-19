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
    int q;
    cin >> q;
    while(q--)
    {
        int u, v;
        cin >> u >> v;
        bool res;
        if (u > v)
        {
            res = false;
        }
        else if (u == v)
        {
            res = true;
        }
        else
        {
            int checku = u & (u - 1);
            int checkv = v & (v - 1);
            if (checku == 0 && checkv == 0)
            {
                res = true;
            }
            else if (checku > 0 && checkv == 0)
            {
                res = false;
            }
            else if (checku == 0 && checkv > 0)
            {
                res = false;
            }
            else
            {
                if (v - u == u)
                {
                    res = true;
                }
                else
                {
                    while(u < v)
                    {
                        int k = log2(u);
                        for (int i = 0; i <= k; i++)
                        {
                            if (u & (1 << i) > 0)
                            {
                                u += 1 << i;
                            }
                            if (u == v)
                            {
                                res = true;
                                break;
                            }
                            else if (u > v)
                            {
                                res = false;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if (res == true)
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