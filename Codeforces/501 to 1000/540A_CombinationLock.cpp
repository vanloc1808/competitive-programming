#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;

#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minValue(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int minValue3(int a, int b, int c)
{
    int Min = a;
    if (b < Min)
    {
        Min = b;
    }
    if (c < Min)
    {
        Min = c;
    }
    return Min;
}

int main()
{
    fastinout;
    int n;
    cin >> n;
    string sCur, sGoal;
    cin >> sCur >> sGoal;
    vector<int> aCur;
    vector<int> aGoal;
    for (int i = 0; i < sCur.length(); i++)
    {
        aCur.push_back(sCur[i] - '0');
        aGoal.push_back(sGoal[i] - '0');
    }
    int totalSteps = 0;
    for (int i = 0; i < aCur.size(); i++)
    {
        totalSteps += minValue3(abs(aCur[i] - aGoal[i]), abs(aCur[i] + 10 - aGoal[i]), abs(aGoal[i] + 10 - aCur[i]));
    }
    cout << totalSteps;
    return 0;
}
