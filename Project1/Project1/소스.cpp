#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int arr[11] = {0};

	cin >> n;

	int i = 0;
	while (n>0)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}

	sort(arr, arr + i);

	for (int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
}