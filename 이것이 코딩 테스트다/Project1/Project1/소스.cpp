#include <iostream>
using namespace std;



void main()
{
	string input;
	int x = 0, y = 0;
	int cnt = 0;

	int bx[] = { -1, 1, 2, 2, 1, -1, -2, -2 };
	int by[] = { -2,-2, -1, 1, 2, 2, 1, -1 };

	cin >> input;
	x = input[0] - 'a' + 1;
	y = input[1] - '0';

	for (int i = 0; i < 8; i++)
	{
		if ((x + bx[i] > 0 && x + bx[i] < 9) && (y + by[i] > 0 && y + by[i] < 9))
			cnt++;
	}
	cout << cnt;
}