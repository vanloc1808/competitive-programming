#include "bits/stdc++.h" 
using namespace std; 
signed main() { 
    string s; cin >> s; 
    if (s.length() <= 2) {
        cout << "no\n";
        return 0;
    }
    string x = s.substr(s.size() - 3, 3); 
    if (x == ".py" || x == ".Py" || x == ".pY" || x == ".PY") cout << "yes"; 
    else cout << "no"; 
    return 0;
}
