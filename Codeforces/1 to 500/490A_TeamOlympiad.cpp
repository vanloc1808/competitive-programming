#include <iostream>
#include <vector>
using namespace std;

int minValue(int a, int b, int c)
{
	int minValue = a;
	if (b < minValue)
	{
		minValue = b;
	} 
	if (c < minValue)
	{
		minValue = c;
	}
	return minValue;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	vector <int> programming;
	vector <int> math;
	vector <int> pe;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			programming.push_back(i + 1);
		}
		else if (a[i] == 2)
		{
			math.push_back(i + 1);
		}
		else
		{
			pe.push_back(i + 1);
		}
	}
	int teamsformed = minValue(programming.size(), math.size(), pe.size());
	if (teamsformed == 0)
	{
		cout << teamsformed << "\n";
	}
	else
	{
		cout << teamsformed << "\n";
		for (int i = 0; i < teamsformed; i++)
		{
			cout << programming[i] << " " << math[i] << " " << pe[i] << "\n";
		}
	}
	return 0;
}