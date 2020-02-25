#include <iostream>
using namespace std;


int main()
{
	int n;
	int count[10001] = { 0 };
	int temp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &temp);
		count[temp]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			printf("%d\n", i);
		}
	}
	
}