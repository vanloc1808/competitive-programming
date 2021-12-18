#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int Count = 0;
	int maxValue = a[0], minValue = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > maxValue)
		{
			maxValue = a[i];
			Count++;
		}
		else if (a[i] < minValue)
		{
			minValue = a[i];
			Count++;
		}
	}
	cout << Count;
	return 0;
}