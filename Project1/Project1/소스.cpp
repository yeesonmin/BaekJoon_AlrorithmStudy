#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//카운팅 정렬이용

int main()
{
	int n;
	int count[10000] = { 0 };
	int temp, max = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		count[temp]++;
		if (max < temp)
		{
			max = temp;
		}
	}

	for (int i = 0; i <= max; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			cout << i << '\n';
		}
	}
	
}