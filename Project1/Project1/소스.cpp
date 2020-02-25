#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n;
	int count[10001] = { 0 };
	int temp, max = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		count[temp]++;

		max < temp ? max = temp : max;
	}

	for (int i = 1; i <= max; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			cout << i << '\n';
		}
	}
	
}