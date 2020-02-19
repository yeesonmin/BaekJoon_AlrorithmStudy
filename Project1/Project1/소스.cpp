#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//퀵정렬 복습

void Quicksort(int *arr, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (arr[i] <= arr[key] && i <= end)
		{
			i++;
		}
		while (arr[j] >= arr[key] && j>start)
		{
			j--;
		}

		if (i > j)
		{
			temp = arr[j];
			arr[j] = arr[key];
			arr[key] = temp;
			
		}
		else
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	Quicksort(arr, start, j - 1);
	Quicksort(arr, j + 1, end);
}
int main()
{

	int *arr = new int[10];
	for (int i = 0; i < _msize(arr)/ sizeof(arr[0]); i++) //_msize : 동적배열 크기 구할 때 사용
	{
		cin >> arr[i];
	}
	Quicksort(arr, 0, (_msize(arr) / sizeof(arr[0])) - 1);

	for (int i = 0; i < _msize(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << '\n';
	}

}