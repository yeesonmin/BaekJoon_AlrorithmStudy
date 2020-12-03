#include<iostream>
#include<vector>

using namespace std;
/// <summary>
/// 큰 수의 법칙
/// </summary>

void main()
{
	vector<int> arr;
	int N, M, K;
	int max = 0, max2 = 0;
	int sum = 0;

	cin >> N >> M >> K;

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
		if (max <= arr[i])
		{
			max2 = max;
			max = arr[i];
		}

	}

	if (max == max2)
	{
		cout << max * M;
	}
	else
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < K; j++)
			{
				sum += max;
				i++;
			}
			sum += max2;

		}
		cout << sum;
	}








}