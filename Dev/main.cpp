#include <bits/stdc++.h>

using namespace std;

//��Ʈ��ŷ
//���� : https://blog.encrypted.gg/732

int n, m;
void Backtracking(int k, int *arr)
{
	if(k == m)
	{
		for(int i = 0 ; i<m; i++) cout << arr[i] << " ";
		cout << '\n';
		return;
	}
	
	int chc = 0;
	if(k != 0) chc = arr[k-1];
	for(int i = chc; i<n;i++)
	{
		arr[k] = i+1;
		Backtracking(k+1, arr);
	}

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	int arr[m] = { 0 };//arr : ����Ʈ

	
	Backtracking(0,arr);

}
