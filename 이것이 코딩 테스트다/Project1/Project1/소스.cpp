#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a;
vector<int> b;
void main() {
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		b.push_back(x);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());


	for (int i = 0; i < k; i++) {
		if (a[i] < b[n - i - 1]) {
			swap(a[i], b[n - i - 1]);
		}
		else
		{
			break;
		}
	}

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	cout << sum;
}