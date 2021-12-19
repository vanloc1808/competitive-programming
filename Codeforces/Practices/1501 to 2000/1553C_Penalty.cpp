#include <bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
typedef float fl;
typedef double db;

#define name ""
#define iof freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
#define fastio std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0)
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

int solve(std::string s){
    int res = 9;
    int team1 = 0, team2 = 0;
    for (int i = 0; i < s.length();i++){
        if(i % 2 == 0){
            if(s[i]!='0'){
                team1++;
            }
        } else {
            if(s[i] == '1'){
                team2++;
            }
        }
        if(team1 > team2 + (10 - i) / 2){
            res = std::min(res,i);
        }
        if(team2 > team1 + (9 - i) / 2){
            res = std::min(res,i);
        }
    }
    team1 = 0, team2 = 0;
    for (int i = 0; i < s.length();i++){
        if(i % 2 == 0){
            if(s[i]=='1'){
                team1++;
            }
        } else {
            if(s[i] != '0'){
                team2++;
            }
        }
        if(team1 > team2 + (10 - i) / 2){
            res = std::min(res,i);
        }
        if(team2 > team1 + (9 - i) / 2){
            res = std::min(res,i);
        }
    }
    return res + 1;
}

int main()
{
	fastio;
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        std::cout << solve(s) << "\n";
    }
}
