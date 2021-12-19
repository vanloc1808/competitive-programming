#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> arr;
ll cnt = 0;

bool isPrime(int a){
    if (a < 2)
        return false;
    for (int i(2); i*i <=a; i++)
        if (a%i==0)
            return false;
    return true;
}

void gen(ll num, ll m, int s1, int s2, ll num1, ll num2)
{
    if (num >= m)
    {
        if (num > m)
            return;
        if (isPrime(s1) && isPrime(s2)){
                cnt++;
                cout << num1 << " " << num2 << endl;
        }
        return;
    }
    for (int i(0); i <= 9; i++){
        for (int j(0); j <= 9; j++){
            ll temp = num * 10 + i + 2*j;
            if (temp <= m )
            {
                gen(temp, m, s1+i, s2+j, num1*10 + i, num2*10+j);
            }
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    for (int i(0); i <=9; i++)
    for (int j(0); j<=9; j++){
        if ( i==0 && j==0)
            continue;
        gen(i+2*j,n,i,j, i, j);
    }
    cout << cnt;
}
