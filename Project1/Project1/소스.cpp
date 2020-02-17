#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//������ ����
//����
//https://www.youtube.com/watch?v=O-O-90zX-U4&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=5
//https://www.youtube.com/watch?v=gBcUO_6JXIA&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=6



void quickSort(int *data, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int key = start; //���ذ�
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (data[i] <= data[key] && i <= end)
		{
			//���ذ����� ū ���� ���� �� ���� �ݺ�
			i++;
		}
		while (data[j] >= data[key] && j > start)
		{
			//���ذ����� ���� ���� ���� �� ���� �ݺ�
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;

		}
		else
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main()
{
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}


}