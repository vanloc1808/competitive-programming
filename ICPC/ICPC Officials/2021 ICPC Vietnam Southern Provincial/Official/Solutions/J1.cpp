
#include <bits/stdc++.h>

using namespace std;

const int MAX = 5010;

int row[MAX][MAX], col[MAX][MAX];
string s[MAX];

int main()
{
    int n,m;
    cin >> n >> m;

    for (int i(0); i < n;i++)
        cin >> s[i];

    for (int i(0); i < n; i++)
    {
        for (int j(0); j < s[i].length(); j++){
            row[i + 1][j + 1] = (s[i][j] - '0') + row[i + 1][j];
        }
    }

    for (int i(0); i < n; i++)
    {
        for (int j(0); j < s[i].length(); j++){
            col[i + 1][j + 1] = (s[i][j] - '0') + col[i][j + 1];
        }
    }

    /*for (int i(1); i <=n ; i++)
    {
        for (int j(1); j <= m; j++)
            cout << col[i][j] << " ";
        cout << endl;
    }//*/

    int Size = -1;
    pair<int, int> cord;

    for (int i(1); i <=n ; i++)
        for (int j(1); j <= m; j++){
            if (s[i-1][j-1] == '1'){
                int l = 0, r = min({i-1, n-i, j-1, m-j}) + 1;
                int res = r;
                while (l < r){
                    int mid = (l+r)>>1;
                    if (row[i][j+mid]-row[i][j-mid-1] == mid * 2 + 1 &&
                        col[i + mid][j] - col[i-mid-1][j] == mid * 2 + 1)
                        {
                            res = mid;
                            l = mid + 1;
                        }
                    else r = mid;
                }

                if (res > 0 && res > Size){
                    Size = res;
                    cord = make_pair(i,j);
                }
            }
        }

    if (Size > 0){
        cout << 2*(Size * 2 + 1) - 1 << endl;
        cout << cord.first << " " << cord.second;
    }
    else
        cout << -1;
}
