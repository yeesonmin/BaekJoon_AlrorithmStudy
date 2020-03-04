#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int x[100000] = {0};
	int y[100000] = { 0 };
	cin >> n;
	
	//힙
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];

		if (i >= 1)
		{
			int c = i;

			do {
				int p = (c - 1) / 2;
				if (x[c] > x[p])
				{
					int temp = x[c];
					x[c] = x[p];
					x[p] = temp;
					int tempy = y[c];
					y[c] = y[p];
					y[p] = tempy;
				}
				c = p;
			} while (c != 0);
		}
	}

	

	//오름차순
	for (int i = n - 1; i >= 0; i--)
	{
		int temp = x[0];
		x[0] = x[i];
		x[i] = temp;
		int tempy = y[0];
		y[0] = y[i];
		y[i] = tempy;

		int c = 1;
		int p = 0;

		do {
			c = 2 * p + 1;

			if (x[c] < x[c+1] && c < i-1)
			{
				c++;
			}

			if (x[c] > x[p]&& c<i)
			{
				int temp = x[c];
				x[c] = x[p];
				x[p] = temp;
				int tempy = y[c];
				y[c] = y[p];
				y[p] = tempy;
			}
			p = c;
		} while (c < i);

	}

	//y정렬
	for (int i = 0; i < n; i++)
	{
		int xtemp = i;
		
		while (true)
		{
			if (x[i] == x[i + 1] && i<n-1)
			{
				i++;
			}
			else
			{
				break;
			}
		}
	
		sort(y + xtemp, y + i+1);
	
	}
	
	for (int i = 0; i < n; i++)
	{ 
		cout << x[i] << " " << y[i] << '\n';
	}
}