/**
 *    author:    vanloc1808
 *    created:   02-10-2021   19:28:41
**/

#include<bits/stdc++.h>

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

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

const long long INF = 2e18;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

bool solve() {
    string s, t;
    cin >> s >> t;
 
    if (s == t) {
        return true;
    }
 
    int diffNumber = 0;
 
    int posDiffer = -1;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            diffNumber++;
 
            posDiffer = i;
        }
    }
 
    if (diffNumber != 2) {
        return false;
    }
 
    if(diffNumber > 0) {
        if ((s[posDiffer] == t[diffNumber - 1] && s[diffNumber - 1] == t[diffNumber])) {
            return true;
        }
    }
 
    if (diffNumber < s.length()- 1) {
         if ((s[posDiffer] == t[diffNumber + 1] && s[diffNumber + 1] == t[diffNumber])) {
            return true;
        }
    }
 
    return false;
}

int main()
{
    fastio;
    
    if (solve()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    
    return 0;
}