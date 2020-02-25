#include <iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int count[10001] = { 0 };
	int temp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
		cin >> temp;
		count[temp]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			cout << i << '\n';
		}
	}
	
}