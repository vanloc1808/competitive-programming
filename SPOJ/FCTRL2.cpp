/**
 *    author:    vanloc1808
 *    created:   31-01-2022   15:35:30
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

string factorial[101];

string multi(string s, int n) {
    string res = "";

	stack<int> st;

	int total, carry = 0;

	for(int i = s.length() - 1; i>=0; i--) {
		total = carry + (n * (s[i] - 48));
		st.push(total % 10);

		carry = total / 10;
	}

	while(carry > 0){
		st.push(carry % 10);
		carry /= 10;
	}

	while(st.empty() == false){
		res.append(1, st.top() + 48);

		st.pop();
	}

	return res;
}
void solve() {
    factorial[0] = "1";

    for (int i = 1; i <= 100; i++) {
        factorial[i] = multi(factorial[i - 1], i);
    }
}

int main()
{
    fastio;
    
    solve();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << factorial[n] << "\n";
    }
    
    return 0;
}