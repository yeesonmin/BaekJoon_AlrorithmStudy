#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { 0, 0, -1, 1 }, dy[4] = {-1,1,0,0};
vector<pair <int, int>> node[1000000];
bool visited[1000000] = { false };


void main()
{
	bool map[1000][1000];
	int n, m;
	int cnt = 0, num = 0;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 0) {
				node[num].push_back({ i,j });
				num++;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i == j) {
				break;
			}

			for (int k = 0; k < 4; k++) {
				if (node[i][0].first + dx[k] == node[j][0].first && node[i][0].second + dx[k] == node[j][0].second) {
					node[i].push_back({ j , 0});
				}
			}
		}
	}

	queue<int> q;
	q.push(0);
	visited[0] = true;

	for (int i = 0; i < num; i++)
	{

	}
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 1; i < node[x].size(); i++) {
			int y = node[x][i].first;
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
	cnt++;
}