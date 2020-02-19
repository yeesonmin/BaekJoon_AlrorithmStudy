#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//퀵정렬 복습2

void quicksort(int *arr, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i<=j)
	{
		while (arr[i] <= arr[key] && i < end)
		{
			i++;
		}
		while (arr[j] >= arr[key] && j > start)
		{
			j--;
		}

		if (i < j)
		{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
		else
		{
			temp = arr[j];
			arr[j] = arr[key];
			arr[key] = temp;
		}
	}

	quicksort(arr, start, j - 1);
	quicksort(arr, j + 1, end);

}
int main()
{
	int n = 10;
	int arr[10];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	quicksort(arr, 0, n - 1);
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] <<'\n';
	}
	
}