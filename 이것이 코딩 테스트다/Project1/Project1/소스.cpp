#include <iostream>
#include <queue>
using namespace std;


int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void main()
{
	int map[200][200];
	int n = 0, m = 0;

	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}

	queue<pair <int, int>> q;
	q.push({ 0, 0 });
	int cnt = 1;
	int x, y;

	bool sizeChange = true;
	while (!q.empty())
	{
		if (sizeChange) {
			cnt++;
			sizeChange = false;
		}
		
		for (int i = 0; i < 4; i++) {
			x = q.front().second + dx[i];
			y = q.front().first + dy[i];
			if ((x >= 0 && x < m) && (y >= 0 && y < n))
			{
				if (map[y][x] == 1) {
					q.push({ y , x });
					sizeChange = true;
					map[y][x] = cnt;
				}
			}
			
		}
		q.pop();
	}

	cout << map[n - 1][m - 1];

}