#include <iostream>
#include<vector>

#define INF 1e9
using namespace std;

//������ ���ͽ�Ʈ�� ����

//����, ������, ����
int n, m, start;
//���
vector<pair<int, int>>graph[100001];
//���̺�
int d[100001];
//�湮���
bool visited[100001];


int getSmallestNode()
{
	//����� ��� �� �Ÿ��� ���� ������ �湮 ���� ��� ã��
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
	//���۰� �ʱ�ȭ
	d[start] = 0;
	visited[start] = true;

	//���̺� �ۼ�
	for (int i = 0; i < graph[start].size(); i++) {
		d[graph[start][i].first] = graph[start][i].second;
	}

	//������ ���̺� �ۼ�
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

	//��� ����
	for (int i = 0; i < m; i++)
	{
		//a : ���۳��, b: �������, c : �Ÿ�
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
	}

	//���̺� �������� �ʱ�ȭ
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