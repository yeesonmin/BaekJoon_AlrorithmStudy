#include <iostream>
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
	int n, avg = 0, mid = 0, mcnt = 0, max = -4000, min = 4000;
	int p[4001] = { 0 }, n[4001] = { 0 };
	int temp;
	
	cin >> n;
	int *arr = new int[n] { 0 };

	for (int i = 0; i < n; i++)
	{
		cin >> temp;


	}

	
}