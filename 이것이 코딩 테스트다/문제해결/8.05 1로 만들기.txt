#include <iostream>


using namespace std;
int mincnt = 30000;

int oneMake(int x, int cnt) {
	if (x == 1) {
		if (mincnt > cnt) {
			mincnt = cnt;
			return mincnt;
		}
		else
		{
			return mincnt;
		}
	}

	if (x % 5 == 0) {
		oneMake(x / 5, cnt+1);
	}
	if (x % 3 == 0) {
		oneMake(x / 3, cnt + 1);
	}
	if (x % 2 == 0) {
		oneMake(x / 2, cnt + 1);
	}
	
	oneMake(x - 1, cnt + 1);
	
}
void main() {
	int x;
	cin >> x;

	int cnt = 0;

	cout << oneMake(x, cnt);
}