#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

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
		while (data[i] <= data[key] && i < end)
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

		}
	}
}
int main()
{
	//������ ����
	//����
	//https://www.youtube.com/watch?v=O-O-90zX-U4&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=5
	//https://www.youtube.com/watch?v=gBcUO_6JXIA&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=6


}