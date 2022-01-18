#include <bits/stdc++.h>  
 
using namespace std;
 
const int MOD = 1e9 + 7;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define mp make_pair
#define fi first
#define se second
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MAXN = 2e5 + 5;

struct Node {
    int lv = 0, rv = 0, sum = 0;
}t[MAXN * 22];
 
int a[MAXN], root[MAXN], sz = 0;
 
int build(int l, int r){
    int next = ++sz;
    if(l != r){
        int mid = (l + r) >> 1;
        t[next].lv = build(l, mid);
        t[next].rv = build(mid + 1, r);
    }
    return next;
}
 
int update(int cur, int l, int r, int pos, int val){
    int next = ++sz;
    t[next] = t[cur], t[next].sum += val;
    if(l == r) 
        return next;
    else {
        int mid = (l + r) >> 1;
        if(pos <= mid) 
            t[next].lv = update(t[cur].lv, l, mid, pos, val);
        else 
            t[next].rv = update(t[cur].rv, mid + 1, r, pos, val);
    }
    return next;
}
 
int get(int cur, int l, int r, int u, int v){
    if(r < u || v < l) return 0;
    if(u <= l && r <= v)
        return t[cur].sum;
    int mid = (l + r) >> 1;
    return get(t[cur].lv, l, mid, u, v) + get(t[cur].rv, mid + 1, r, u, v);
}

int cnt1[MAXN];

int main(){
    io
    // freopen("test.inp", "r", stdin);
    // freopen("test.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    root[0] = build(1, n);
    map <int, int> last;
    for(int i = 1; i <= n; i++){
        int x = a[i];
        if(x == 1)
            cnt1[i] = cnt1[i-1] + 1;
        else
            cnt1[i] = cnt1[i-1];
        root[i] = root[i - 1];
        if(last[x] > 0) 
            root[i] = update(root[i], 1, n, last[x], -1);
        last[x] = i;
        root[i] = update(root[i], 1, n, i, 1);
    }

    int prevAns = 0;
    for(int i = 0; i < m; i++){
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int U = (1LL*A * prevAns + B - 1 + n)%n + 1;
        int V = (1LL*C * prevAns + D - 1 + n)%n + 1;
        int L = min(U, V), R = max(U, V);
        //cout << L << ' ' << R << '\n';
        int unique_value = get(root[R], 1, n, L, R);

        if(cnt1[R] - cnt1[L-1] > 0)
            unique_value += (cnt1[R] - cnt1[L-1] - 1);
        prevAns = unique_value;
        cout << prevAns << '\n';
    }
}