#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Cut(vector<int> a, int start, int end, int m) {
	if (start > end) {
		return -1;
	}

	int midcut = (start + end) / 2;
	int sum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] - midcut > 0) {
			sum += a[i] - midcut;
		}
	}

	if (m == sum) {
		return midcut;
	}
	else if(m < sum) {
		return Cut(a, midcut + 1, end, m);
	}
	else
	{
		return Cut(a, start, midcut - 1, m);
	}
	
	
}

void main() {
	int n, m;

	vector<int> a;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}

	sort(a.begin(), a.end());

	cout << Cut(a, 0, a[n - 1], m);
	
	
}