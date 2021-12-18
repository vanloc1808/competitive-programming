#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	int n, k;
	vector<int> a;
	vector<int> b;
	while (t--)
	{
		a.clear();
		b.clear();
		cin >> n >> k;
		int sumA = 0, sumB = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			sumA += x;
			a.push_back(x);
		}
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			b.push_back(x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (a[0] >= b[n - 1])
		{
			cout << sumA << "\n";
		}
		else
		{
			int i = 0;
			while (k--)
			{
				if (a[i] < b[n - 1 - i])
				{
					sumA = sumA - a[i] + b[n - 1 - i];
					swap(a[i], b[n - 1 - i]);
					i++;
				}
			}
			cout << sumA << "\n";
		}
	}
	return 0;
}