/**
 *    author:    vanloc1808
 *    created:   12-10-2021   09:38:40
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

string solve() {
    string s;
    cin >> s;

   vector<char> number;
   number.push_back('1');
    for (int i = 3; i <=9 ; i++) {
        number.push_back('0' + i);
    }

    if (s.length() > 8) {
        return "-1";
    }

    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < number.size(); j++) {
            if (s[i] - '0' <= number[j]) {
                ans += number[j];
                number.erase(number.begin() + j);
                break;
            }
        }
    }

    // for (auto x : number) {
    //     cout << x << " ";
    // }

    return ans;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}