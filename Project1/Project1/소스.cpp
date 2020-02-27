#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*
	산술평균 : N개의 수들의 합을 N으로 나눈 값
	중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
	최빈값 : N개의 수들 중 가장 많이 나타나는 값
	범위 : N개의 수들 중 최댓값과 최솟값의 차이

	N : 홀수

	*/

	int n, mid = 0, mcnt = 0, max = -4000, min = 4000, gap = 0, mode = 0;
	float avg = 0;
	int positive[4001] = { 0 }, negative[4001] = { 0 }; //양수 음수 배열
	int modearr[8001] = {0};
	int temp;
	
	cin >> n;
	int *arr = new int[n] { 0 };//정렬배열

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		avg += temp; //평균을 구하기 위해 더함.
		max < temp ? max = temp : max;//최댓값
		min > temp ? min = temp : min;//최솟값

		if (temp < 0)
		{
			negative[abs(temp)]++;
			mcnt < negative[abs(temp)] ? mcnt = negative[abs(temp)] : mcnt; //많이 나타난 수

		}
		else
		{
			positive[temp]++;
			mcnt < positive[temp] ? mcnt = positive[abs(temp)] : mcnt; //많이 나타난 수
		}
	}

	if (min < 0)
	{
		int k = 0;
		for (int i = 1; i <= abs(min); i++)
		{
			for (int j = 0; j < negative[i]; j++)
			{
				arr[k] = -i;
				k++;
			}
		}
		for (int i = 0; i <= max; i++)
		{
			for (int j = 0; j < positive[i]; j++)
			{
				arr[k] = i;
				k++;
			}
		}
	}
	else
	{
		int k = 0;
		for (int i = 0; i <= max; i++)
		{
			for (int j = 0; j < positive[i]; j++)
			{
				arr[k] = i;
				k++;
			}
		}
	}


	//결과
	avg = round(avg / n);
	mid = arr[n / 2];

	int k = 0;
	for (int i = abs(min); i >= 1; i--)
	{
		if (negative[i] == mcnt)
		{
			modearr[k] = -i;
			mode = modearr[k];
			if (k == 1)
			{

				break;
			}
			k++;
		}
	}
	for (int i = 0; i <= max; i++)
	{
		if (positive[i] == mcnt)
		{
			modearr[k] = i;
			mode = modearr[k];
			if (k == 1)
			{
				
				break;
			}
			k++;
		}
	}

	gap = max - min;
	
	
	cout << avg << '\n';
	cout << mid << '\n';
	cout << mode << '\n';
	cout << gap << '\n';
	
}