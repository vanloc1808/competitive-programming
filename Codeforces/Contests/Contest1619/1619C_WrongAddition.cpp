/**
 *    author:    vanloc1808
 *    created:   20-12-2021   22:11:52
**/

//WRONG ANSWER ON TEST 2

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

string solve() {
    string a, s; 
    cin >> a >> s;

    int ptr = 0;
    string b = "";
    reverse(a.begin(), a.end()); 
    reverse(s.begin(), s.end()); 
    bool check = true;
    for (int i = 0; i < a.length(); i++){
        if (ptr == s.length()) {
            check = false;
            break;
        }
        if (a[i] <= s[ptr]){
            b += (char)(s[ptr] - a[i] + '0');
            ptr++;
        }
        else {
            if (ptr + 1 == s.length() || s[ptr + 1] > '1'){
                check = false;
                break;
            }
            int x = (s[ptr + 1] - '0') * 10 + (s[ptr] - '0');
            ptr += 2;
            b += (char)(x - (a[i] - '0') + '0');
        }
    }
    while (ptr < s.length()) b += s[ptr++];
    while (b.length() && b.back() == '0') b.pop_back();
    reverse(b.begin(), b.end());
    if (b.length() == 0 || !check){
        return "-1";
    }
    return b;
}


int main()
{
    fastio;
    int T; cin >> T;
    while (T--){
        cout << solve() << "\n";
    }
    return 0;
}