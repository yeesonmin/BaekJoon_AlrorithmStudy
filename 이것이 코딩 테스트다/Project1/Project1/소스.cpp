#include <iostream>
#include<vector>

#define INF 1e9
using namespace std;

//간단한 다익스트라 복습

//노드수, 간선수, 시작
int n, m, start;
//노드
vector<pair<int, int>>graph[100001];
//테이블
int d[100001];
//방문기록
bool visited[100001];


int getSmallestNode()
{
	//연결된 노드 중 거리가 가장 가깝고 방문 안한 노드 찾기
	int minValue = INF;
	int index = 0;

	for (int i = 1; i <= n; i++) {
		if (d[i] < minValue && !visited[i]) {
			minValue = d[i];
			index = i;
		}
	}

	return index;
}

void dijkstra(int start) {
	//시작값 초기화
	d[start] = 0;
	visited[start] = true;

	//테이블 작성
	for (int i = 0; i < graph[start].size(); i++) {
		d[graph[start][i].first] = graph[start][i].second;
	}

	//나머지 테이블 작성
	for (int i = 0; i < n - 1; i++) {
		int now = getSmallestNode();
		visited[now] = true;

		for (int i = 0; i < graph[now].size(); i++) {
			int cost = d[now] + graph[now][i].second;
			if (cost < d[graph[now][i].first]) {
				d[graph[now][i].first] = cost;
			}
			
		}
	}

}

void main() {


	cin >> n >> m >> start;

	//노드 연결
	for (int i = 0; i < m; i++)
	{
		//a : 시작노드, b: 도착노드, c : 거리
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
	}

	//테이블 무한으로 초기화
	fill_n(d, 100001, INF);

	dijkstra(start);

	for (int i = 1; i <= n; i++) {
		if (d[i] == INF) {
			cout << "INF" << ' ';
		}
		else
		{
			cout << d[i];
		}
	}
}