#include <iostream>
#include <algorithm>
using namespace std;

//힙정렬 복습2

int main()
{
	int n = 9;
	int heap[9] = { 7,6,5,8,3,5,9,1,6 };


	//최대힙 구조 : 부모가 자식 보다 큰 구조
	for (int i = 1; i < n; i++) {

		int c = i;
		do {
			int p = (c - 1) / 2;
			if (heap[c] > heap[p])
			{
				int temp = heap[p];
				heap[p] = heap[c];
				heap[c] = temp;
			}
			c = p;
		} while (c != 0);
	}

	//오름차순 힙 구조
	for (int i = n-1 ;i >= 0; i--)
	{
		//가장 큰 값 맨 뒤로 옮기기
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		int p = 0;
		int c = 1;

		do {
			c = 2 * p + 1;
			//맨위에 있는 그룹에서 가장 큰 자식 값 선택
			if (heap[c] < heap[c + 1] && c < i - 1)
			{
				c++;
			}

			if (heap[p] < heap[c] && c<i)
			{
				temp = heap[p];
				heap[p] = heap[c];
				heap[c] = temp;
			}
			p = c;
		} while (c < i);
		
		

	}

	for (int i = 0; i < n; i++)
	{
		cout << heap[i] << " ";
	}
}