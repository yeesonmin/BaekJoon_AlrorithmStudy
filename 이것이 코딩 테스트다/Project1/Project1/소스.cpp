#include<stdio.h>


/// <summary>
/// 1이 될 때까지
/// </summary>

void main()
{
	
	int n = 0, k = 0;
	int cnt = 0;

	scanf_s("%d %d", &n, &k);

	while (1)
	{
		if (n % k > 0)
		{
			n--;
			cnt++;
		}
		else
		{
			n /= k;
			cnt++;
		}

		if (n == 1)
		{
			printf("%d", cnt);
			break;
		}

	}
}