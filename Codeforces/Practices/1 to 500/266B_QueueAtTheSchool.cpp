#include <iostream>
#include <string>
using namespace std;

void swap(char& a, char& b)
{
    char c = a;
    a = b;
    b = c;
}

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--)
    { 
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s;
}


