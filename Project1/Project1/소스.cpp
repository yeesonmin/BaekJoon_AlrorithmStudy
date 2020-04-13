#include <bits/stdc++.h>
using namespace std;

int n, m;
void backtraking(int *arr, bool *cNumber, int k)
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

	for (int i = 0; i < n; i++)
	{
		if (!cNumber[i])
		{
			arr[k] = i + 1;
			cNumber[i] = 1;
			backtraking(arr, cNumber, k + 1);
			cNumber[i] = 0;
		}
	}


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;

	int *arr = new int[m]{ 0 };
	bool *cNumber = new bool[n]{ 0 };
	backtraking(arr, cNumber, 0);

}