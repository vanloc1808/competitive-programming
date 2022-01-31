/**
 *    author:    vanloc1808
 *    created:   31-01-2022   11:37:31
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

bool isPalindrome(string s) {
    int n = s.length();

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }

    return true;
}

bool isAllNines(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '9') {
            return false;
        }
    }

    return true;
}

string findForAllNines(string s) {
    string ans = "1";

    for (int i = 0; i < s.length() - 1; i++) {
        ans += "0";
    }

    ans += "1";

    return ans;
}

string addOneToCenter(string s) {
    int n, i, half, carry;
    half = s.length() / 2;

    i = half;

    do {
        n = s[i] - '0';
        n++;

        carry = n / 10;

        s[i] = (n % 10) + '0';

        i++;
    } while (i < s.length() && carry > 0);

    for (int i = 0, j  = s.length() - 1; i <= j; i++, j--) {
        s[i] = s[j];
    }

    return s;
}

string prepare(string s) {
    for (int i = 0, j = s.length() - 1; i <= j; i++, j--) {
        if (s[i] > s[j]) {
            s[j] = s[i];

            continue;
        } else if (s[j] > s[i]) {
            s[j] = s[i];

            int n, carry = 1, k = j - 1;

            while (carry > 0 && k >= 0) {
                n = s[k] - '0';
                n += carry;

                carry = n / 10;

                s[k] = (n % 10) + '0';

                k--;
            }
        }
    }

    return s;
}

string solve() {
    string s;
    cin >> s;

    if (isPalindrome(s)) {
        if (isAllNines(s)) {
            return findForAllNines(s);
        } 

        return addOneToCenter(s);
    }

    return prepare(prepare(s));
}

int main()
{
    fastio;
    
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}