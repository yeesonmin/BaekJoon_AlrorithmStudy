#include <bits/stdc++.h>
using namespace std;

int n, m;
void func(int* arr, bool* isused, int k) { // ���� k������ ���� ������.
	if (k == m) { // m���� ��� ��������
		for (int i = 0; i < m; i++) cout << arr[i] + 1 << ' '; // arr�� ����ص� ���� ���.(0���� m-1������ �ƴ϶� 1���� m�����̹Ƿ� +1�� ����)
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++) { // 1���� n������ ���� ����
		if (!isused[i]) { // ���� i�� ������ �ʾ�����
			arr[k] = i; // k��° ���� i�� ����
			isused[i] = 1; // i�� ���Ǿ��ٰ� ǥ��
			func(arr, isused, k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
			isused[i] = 0; // k��° ���� i�� ���� ��� ��쿡 ���� �� Ȯ�������� i�� ���� �������ʾҴٰ� �����.
		}
	}

}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	int *arr = new int[m] {0};
	bool *isused = new bool[n] {0}; // ��� ���� ������ �ʾҴٰ� �ʱ�ȭ
	func(arr, isused, 0);
}
