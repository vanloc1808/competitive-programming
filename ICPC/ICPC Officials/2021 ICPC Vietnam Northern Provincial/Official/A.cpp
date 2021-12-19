#include "bits/stdc++.h" 
using namespace std; 
signed main() { 
    string s; cin >> s; 
    string x = s.substr(s.size() - 3, 3); 
    if (x == ".py" || x == ".Py" || x == ".pY" || x == ".PY") cout << "yes"; 
    else cout << "no"; 
    return 0;
} 