#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b)
{
	if (a.first == b.first)
	{
		return a.second.first < b.second.first;
	}
	else
	{
		return a.first < b.first;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0;
	vector<pair<int,pair<int, string>>>user;

	//회원수
	cin >> n;

	//회원정보입력
	for (int i = 0; i < n; i++)
	{
		int a;
		string b;
		cin >> a >> b;
		cnt++;
		user.push_back(pair<int, pair<int, string>>(a,make_pair(cnt,b)));
	}
	
	//정렬
	sort(user.begin(), user.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << user[i].first << " " << user[i].second.second << '\n';
	}
}