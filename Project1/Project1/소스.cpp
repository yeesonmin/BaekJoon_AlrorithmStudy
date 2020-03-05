#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//sort함수 이용
//동빈나 블로그 참조
//https://blog.naver.com/ndb796/221228004692
//https://blog.naver.com/ndb796/221227975229

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a = 0;
	vector<pair<int, string>>st{0};
	string s;
	cin >> n;
	

	for (int i = 0; i < n; i++)
	{
		cin >> s;

		for (int j = 0; j <=i-a; j++)
		{
			if (j == i-a)
			{
				st.push_back(pair<int, string>(s.length(), s));
				break;
			}
			if (st[j].second == s)
			{
				a++;
				break;
			}
				

		}
		

	}
	sort(st.begin(), st.end());

	for (int i = 0; i < n-a; i++)
	{
		cout << st[i].second << '\n';
		
	}
}