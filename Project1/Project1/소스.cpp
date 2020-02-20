#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//배합정렬 백준문제로 수정


void merge(int *sorted, int *a, int start, int mid, int end)
{

	int i = start;
	int j = mid + 1;
	int k = start;

	//작은 순서로 배열 삽입
	while (i <= mid && j <= end)
	{
		if (a[i] <= a[j])
		{
			sorted[k] = a[i];
			i++;
				
		}
		else
		{
			sorted[k] = a[j];
			j++;

		}
		k++;
	}

	//남은 데이터 삽입
	if (i > mid)
	{
		for (int t = j; t <= end; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= mid; t++) //end -> mid로 수정
		{
			sorted[k] = a[t];
			k++;
		}
	}

	//정렬된 배렬을 실제 배열로 삽입
	for (int t = start; t <= end; t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort(int *sorted, int a[], int start, int end)
{
	//크기가 1보다 큰 경우
	if (start < end)
	{
		int mid = (start + end) / 2;
		mergeSort(sorted, a, start, mid);
		mergeSort(sorted, a, mid + 1, end);
		merge(sorted, a, start, mid, end);
	}
}
int main()
{
	int n;
	cin >> n;

	int *arr = new int[n];
	int *sorted = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	mergeSort(sorted, arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}
}