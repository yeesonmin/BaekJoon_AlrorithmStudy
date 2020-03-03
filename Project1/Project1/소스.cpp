#include <iostream>
#include <algorithm>
using namespace std;

//힙정렬 복습3

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int *arr = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//최대힙
	for (int i = 1; i < n; i++)
	{
		int c = i;

		do {
			int p = (c - 1) / 2;
			if (arr[c] > arr[p])
			{
				int temp = arr[c];
				arr[c] = arr[p];
				arr[p] = temp;
			}
			c = p;
		} while (c != 0);
	}

	//오름차순
	for (int i = n - 1; i >= 0; i--)
	{
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;

		int c = 1;
		int p = 0;

		do {
			c = 2 * p + 1;

			if (arr[c] < arr[c+1] && c < i-1)
			{
				c++;
			}

			if (arr[c] > arr[p]&& c<i)
			{
				int temp = arr[c];
				arr[c] = arr[p];
				arr[p] = temp;
			}
			p = c;
		} while (c < i);

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}