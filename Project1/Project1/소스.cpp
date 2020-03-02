#include <iostream>
#include <algorithm>
using namespace std;

//힙정렬 복습
//동빈나 (https://blog.naver.com/ndb796/221228342808)


int main()
{
	int n = 9;
	int heap[9] = { 7,6,5,8,3,5,9,1,6 };


	//최대힙 구조 : 부모가 자식 보다 큰 구조
	for (int i = 1; i < n; i++)
	{
		int c = i;

		do {
			int root = (c - 1) / 2;
			if (heap[c] > heap[root])
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
		
		
	}

	//오름차순 힙 구조
	for (int i = n - 1; i >= 0; i--)
	{
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		int root = 0;
		int c = 1;

		do {
			c = 2 * root + 1;
			//자식 중 가장 큰 값 찾기, 마지막 자식은 제외(이미 가장 큰 수)
			if (c < i-1 && heap[c] < heap[c + 1])
			{
				c++;
			}

			if (heap[root] < heap[c] && c<i)
			{
				temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			root = c;
		} while (c < i);
		
	}

	for (int i = 0; i < n; i++)
	{
		cout << heap[i] << " ";
	}
}