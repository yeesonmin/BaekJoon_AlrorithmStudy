#include <iostream>

using namespace std;


void main() {
	int n, m;
	cin >> n >> m;

	int arr[101] = { 0 };
	for (int i =  1; i < n + 1; i++)
	{
		cin >> arr[i];
	}

	int d[10001];
	fill_n(d, 10000, 10001);

	d[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = arr[i]; j <= m; j = j + arr[i]) {
			d[j] = min(d[j], d[j - arr[i]] + 1);
		}
	}

	

	if (d[m] == 10001)
	{
		cout << -1;
	}
	else
	{
		cout << d[m];
	}
	
}