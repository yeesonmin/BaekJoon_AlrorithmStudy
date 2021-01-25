#include <iostream>
#define INF 1e9
using namespace std;


void main() {
	int n, m;
	cin >> n >> m;

	int graph[501][501];

	for (int i = 1; i < 501; i++) {
		fill(graph[i], graph[i] + 501, INF);
	}

	for (int i = 1; i < 501; i++) {
		for (int j = 1; j < 501; j++) {
			if (i == j) graph[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a][b] = c;
	}

	for (int i = 1; i <= n; i++) {
		for (int a = 1; a <= n; a++) {
			for (int b = 1; b <= n; b++) {
				graph[a][b] = min(graph[a][b], graph[a][i] + graph[i][b]);
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
		{
			if (graph[i][j] == INF) {
				cout << INF << ' ';
			}
			else
			{
				cout << graph[i][j] << ' ';
			}
		}
		cout << '\n';
	}
}