#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e5 + 10;

ll arr[MAX];
ll res[MAX]={0};
int pos[2][MAX];
int n[2]={0};

int bs(int l, int r, int key, int arr[]){
    int res = -1;
    r = r + 1;
    while (l < r){
        int mid = (l+r)>>1;

        if (arr[mid] > key){
            res = mid;
            r = mid;
        }
        else l = mid + 1;
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    string s;

    for (int i (0); i < N; i++){
        cin >> arr[i];
        res[0] += arr[i];
    }

    cin >> s;
    for (int i(0); i < s.length(); i++)
    {
        int id = s[i] - '0';
        pos[id][++n[id]] = i + 1;
    }

    /*for (int k(0); k < 2; k++){
    for (int i(1); i <= n[0]; i++)
        cout << pos[k][i] << " ";
        cout << endl;
    }//*/


    pos[0][0] = pos[1][0] = -1;
    for (int i(0); i < N; i++){
        int curPos[2]={0,0};
        ll pre = arr[i];
        bool fl0 = true;
        while ((curPos[0] < n[0] || curPos[1] < n[1]) && arr[i] > 0) {
            if (arr[i] & 1){
                curPos[1] = bs(curPos[1] + 1, n[1], pos[0][curPos[0]], pos[1]);
                //cout << curPos[1] << endl;
                if (curPos[1] <= 0)
                    break;
                arr[i]--;
                res[pos[1][curPos[1]]] += (arr[i] - pre);
                pre = arr[i];
               // cout << pre << endl;
            }
            else{
                curPos[0] = bs(curPos[0] + 1, n[0], pos[1][curPos[1]], pos[0]);
                //cout << curPos[0] << endl;
                if (curPos[0] <= 0)
                    break;
                arr[i] >>= 1;
                res[pos[0][curPos[0]]] += (arr[i] - pre);
                pre = arr[i];
                //cout << pre << endl;
            }

            if (arr[i] == 0){
                if (fl0)
                    fl0 = false;
                else
                    break;
            }
        }
    }

    for (int i(0); i < s.length(); i++){
        res[i+1]+=res[i];
        cout << res[i+1] << endl;
    }
}
