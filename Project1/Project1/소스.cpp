#include <iostream>
#include <algorithm>
#include <string>    //추가
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a = 0;
	//문자열 클래스 사용
	string st[20000];
	string s;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j <= i; j++)
		{
			if (st[j] == s)
			{
				a++;
				break;

			}
			if(j==i)
			{
				st[i-a] = s;
			}
		}
		

		//힙정렬
		if (i >= 1)
		{
			int c = i - a;
			do
			{
				int p = (c - 1) / 2;

				if (st[c].length() > st[p].length())
				{
					string temp = st[c];
					st[c] = st[p];
					st[p] = temp;
				}
				c = p;
			} while (c != 0);
		}
	}
	
	n = n -a;

	//힙 오른차순 정렬
	for (int i = n - 1; i >= 0; i--)
	{
		string temp = st[0];
		st[0] = st[i];
		st[i] = temp;

		int c = 1, p = 0;
		do {
			c = 2 * p + 1;
			if (st[c].length() < st[c + 1].length() && c < i - 1)
			{
				c++;
			}

			if (st[c].length() > st[p].length() && c < i)
			{
				string temp = st[c];
				st[c] = st[p];
				st[p] = temp;
			}
			p = c;

		} while (c < i);
	}

	//사전순으로 정렬
	for (int i = 0; i < n; i++)
	{
		int cnt = 0, len = 0, tempi = i;

		//문자열 길이가 같은 것 고르기.
		while (true)
		{

			if (st[i].length() == st[i + 1].length() && i < n - 1)
			{
				len = st[i].length();
				cnt++;
				i++;
			}
			else
			{
				break;
			}
		}
		
		//사전순
		//왼쪽 글자 기준으로 정렬
		if (len > 0)
		{
			for (int j = len - 1; j >= 0; j--)
			{
				for (int k = tempi; k < i - 1; k++)
				{
					for (int t = tempi; t < i - 1 - k; t++)
					{
						if ((int)st[k][j] > (int)st[k + 1][j])
						{
							string temp = st[k];
							st[k] = st[k + 1];
							st[k + 1] = temp;
						}
					}
				}
			}
		}
		
	}

	for (int i = 0; i < n; i++)
	{
		cout<< st[i]<<'\n';
	}
}