#include <iostream>
#include <queue>
#include <vector>
#define INF 1e9
using namespace std;

int d[101];
priority_queue<pair<int, int>> pq;
vector<int> node[101];
int result = 0;

void first() {
	fill(d, d + 101, 0);
	d[1] = 0;
	pq.push({ 0, 1 });

	while (!pq.empty())
	{
		int dist = pq.top().first;
		int now = pq.top().second;
		pq.pop();
		if (d[now] != 0 && d[now] < dist) continue;
		for (int i = 0; i < node[now].size(); i++) {
			int cost = dist + 1;
			if (cost < d[node[now][i]]) {
				d[node[now][i]] = cost;
				pq.push({ cost , node[now][i] });
			}
		}
	}

}

void second(int start) {


	fill(d, d + 101, 0);
	d[start] = 0;
	pq.push({ 0, start });

	while (!pq.empty())
	{
		int dist = pq.top().first;
		int now = pq.top().second;
		pq.pop();
		if (d[now] != 0 && d[now] < dist) continue;
		for (int i = 0; i < node[now].size(); i++) {
			int cost = dist + 1;
			if (cost < d[node[now][i]]) {
				d[node[now][i]] = cost;
				pq.push({ cost , node[now][i] });
			}
		}
	}

}
void main() {
	int n, m;
	int x, k;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
	}

	cin >> x >> k;

	first();
	result = d[k];

	second(k);
	result += d[x];

	cout << result;
}