#include <iostream>
#include <algorithm>
using namespace std;

void Merge(int *sorted, int *arr, int start, int mid, int end)
{

	int i = start, j = mid+1, k = start;
	
	
	while (i<=mid && j<=end)
	{
		if (arr[i] <= arr[j])
		{
			sorted[k] = arr[i];
			i++;
		}
		else
		{
			sorted[k] = arr[j];
			j++;
		}
		k++;
	}
	
	if (i > mid)
	{
		for (int t = j; t <= end; t++)
		{
			sorted[k] = arr[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= mid; t++)
		{
			sorted[k] = arr[t];
			k++;
		}
		
	}

	for (int t = start; t <= end; t++)
	{
		arr[t] = sorted[t];
	}
	

}

void MergeSort(int *sorted, int *arr, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;

		MergeSort(sorted, arr, start, mid);
		MergeSort(sorted, arr, mid + 1, end);
		Merge(sorted, arr, start, mid, end);

	}
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int x[100000] = {0};
	int sorted[100000] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		//cin >> y[i];
	}

	MergeSort(sorted, x, 0, n-1);

	for (int i = 0; i < n; i++)
	{
		cout << x[i] << '\n';
	}
}