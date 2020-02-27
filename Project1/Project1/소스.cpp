#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,  mode = 0, max = -4000, min = 4000;
	double avg = 0;
	int temp, modearr[8001] = {0}, mcnt = 0;
	
	cin >> n;
	int *arr = new int[n] { 0 };//정렬배열

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		avg += temp; //평균을 구하기 위해 더함.
		max < temp ? max = temp : max;//최댓값
		min > temp ? min = temp : min;//최솟값
		arr[i] = temp;
		
	}

	sort(arr, arr+n); //정렬
	
	for (int i = 0; i < n; i++)
	{
		modearr[arr[i]+4000]++; //등장수
		mcnt < modearr[arr[i] + 4000] ? mcnt = modearr[arr[i] + 4000] : mcnt; //등장수 최댓값
	}

	temp = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (modearr[i] == mcnt)
		{
			if (temp > 1)
			{
				break;
			}
			else
			{
				mode = i - 4000; //최빈값
				temp++;
			}
			
		}
	}

	//결과
	cout << round(avg / n) << '\n';
	cout << arr[n / 2] << '\n';
	cout << mode << '\n';
	cout << max - min << '\n';
}