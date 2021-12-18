#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            Count += 4;
        }
        else if (s == "Cube")
        {
            Count += 6;
        }
        else if (s == "Octahedron")
        {
            Count += 8;
        }
        else if (s == "Dodecahedron")
        {
            Count +=12;
        }
        else
        {
            Count += 20;
        }
    }
    cout << Count;
    return 0;
}