#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//카운팅 정렬이용
//참조 : https://bowbowbow.tistory.com/8

void countingSort(int *count, int *arr, int n, int max)
{
	for (int i = 0; i < n; i++)
	{
		//정렬에 있는 숫자의 등장 횟수 세기
		count[arr[i]]++;

	}

	for (int i = 0; i <= max; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			cout << i << '\n';
		}
	}

	////누적합
	//int *countsum = new int[max+1]{ 0 };
	//countsum[0] = count[0];
	//for (int i = 1; i < max+1; i++)
	//{
	//	countsum[i] = countsum[i - 1] + count[i];
	//}

	////누적합에 따른 배열 만들기
	//int *sorted = new int[n];
	//for (int i = n-1; i >= 0; i--)
	//{
	//	sorted[countsum[arr[i]]-1] = arr[i];

	//	//해당 숫자 누적합 차감.
	//	countsum[arr[i]]--;
	//}

	/*for (int i = 0; i < n; i++)
	{
		cout << sorted[i] << '\n';
	}*/

}
int main()
{
	int n;
	cin >> n;
	
	int *arr = new int[n];
	int max = 0;
	

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	int *count = new int[max+1]{ 0 };
	countingSort(count, arr, n, max);

	delete[] count,arr;
}