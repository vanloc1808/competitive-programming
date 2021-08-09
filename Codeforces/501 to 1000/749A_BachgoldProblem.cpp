#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if (n == 2 || n == 3)
	{
		return true;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << n / 2 << "\n";
	if (n % 2 == 0)
	{
		for (int i = 0; i < n / 2; i++)
		{
			cout << 2 << " ";
		}
	}
	else
	{
		for (int i = 0; i < n / 2 - 1; i++)
		{
			cout << 2 << " ";
		}
		cout << 3;
	}
	return 0;
}