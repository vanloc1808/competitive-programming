#include <iostream>
using namespace std;

int main()
{
	string a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		int length = a[i].length();
		if (length <= 10)
		{
			for (int j = 0; j < length; j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
		else
		{
			int temp = length - 2;
			cout << a[i][0] << temp << a[i][length - 1];
			if (i == n - 1)
			{
				break;
			}
			else
			{
				cout << endl;
			}
		}
	}
	return 0;
}
