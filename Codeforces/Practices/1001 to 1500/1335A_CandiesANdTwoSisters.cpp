#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		int Count;
		if (n % 2 == 0)
		{
			Count = n / 2 - 1;
		}
		else
		{
			Count = (n - 1) / 2;
		}
		cout << Count << "\n";
	}
	return 0;
}