#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 2e5+10;
 
int arr[MAX];
 
int main(){
    int n;
    cin >> n;
 
    for (int i(1); i<=n; i++)
        cin >> arr[i];
 
    int i=1, j=n;
    int turn=0;
    int cur=-1;
 
    do{
        if ( i > j || max(arr[i],arr[j])<=cur)
            break;
 
        turn++;
        if (arr[i]<arr[j]){
            cur = arr[j--];
        }
        else{
            cur = arr[i++];
        }
    } while (true);
 
    if (turn&1)
        cout << "Alice";
    else
        cout << "Bob";
}