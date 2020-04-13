#include <bits/stdc++.h>
using namespace std;

int n, m;
void backtraking(int *arr, int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	int st = 0;
	if (k != 0)
	{
		st = arr[k - 1];
	}
	for (int i = st; i < n; i++)
	{
		
			arr[k] = i + 1;
			backtraking(arr, k + 1);
		
	}


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;

	int *arr = new int[m]{ 0 };
	backtraking(arr, 0);

}