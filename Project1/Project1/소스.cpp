#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<pair<int, string>>user;

	//회원수
	cin >> n;

	//회원정보입력
	for (int i = 0; i < n; i++)
	{
		int a;
		string b;
		cin >> a >> b;
		user.push_back(pair<int, string>(a, b));
	}
	
	//정렬
	sort(user.begin(), user.end());

	for (int i = 0; i < n; i++)
	{
		cout << user[i].first << " " << user[i].second << '\n';
	}
}