#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//배합정렬
//동빈나
//https://blog.naver.com/ndb796/221227934987

int sorted[8]; //정렬배열

void merge(int a[], int start, int mid, int end)
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
		for (int t = i; t <= end; t++)
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

void mergeSort(int a[], int start, int end)
{
	//크기가 1보다 큰 경우
	if (start < end)
	{
		int mid = (start + end) / 2;
		mergeSort(a, start, mid);
		mergeSort(a, mid + 1, end);
		merge(a, start, mid, end);
	}
}
int main()
{
	int number = 8;
	int arr[8] = { 7,6,5,8,3,5,9,1 };
	mergeSort(arr, 0, number - 1);
	for (int i = 0; i < number; i++)
	{
		cout << arr[i] << '\n';
	}
}