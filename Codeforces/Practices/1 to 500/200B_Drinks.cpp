#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int totalAmount = 0;
    for (int i = 0; i < n; i++)
    {
        totalAmount += a[i];
    }
    double averageAmount = (double(totalAmount)) / (n);
    cout <<  setprecision(9) << fixed << averageAmount;
    return 0;
}


