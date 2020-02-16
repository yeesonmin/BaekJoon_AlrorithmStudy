#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sorted[1000000];

void Merge(int arr[], int left, int mid, int right)
{
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			sorted[k++] = arr[i++];
		}
		else
		{
			sorted[k++] = arr[j++];
		}
	}

	if (i>mid) {
		for (l = j; l <= right; l++)
			sorted[k++] = arr[l];
	}
	else {
		for (l = i; l <= mid; l++)
			sorted[k++] = arr[l];
	}

	for (l = left; l <= right; l++) {
		arr[l] = sorted[l];
	}


}
void MergeSort(int arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);
		Merge(arr, left, mid, right);
	}
}

int main()
{
	int n;
	int mid;

	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	MergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}

	
	
}