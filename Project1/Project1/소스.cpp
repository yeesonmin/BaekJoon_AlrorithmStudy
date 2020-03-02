#include <iostream>
#include <algorithm>
using namespace std;

//힙정렬
//동빈나 (https://blog.naver.com/ndb796/221228342808)


int main()
{
	int n = 9;
	int heap[9] = { 7,6,5,8,3,5,9,1,6 };


	//최대 힙 구조
	for (int i = 1; i < n; i++)
	{
		int c = i;
		do {
			int root = (c - 1) / 2; // 특정 원소의 부모
			if (heap[root] < heap[c])
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root; // 원소가 부모가 됨.

		} while (c != 0);
	}
	
	//오른차순
	for (int i = n - 1; i >= 0; i--)
	{
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;

		//힙구조 만듦.
		do {
			c = 2 * root + 1;
			// 자식 중 더 큰 값 찾기
			if (heap[c] < heap[c + 1] && c < i - 1)
			{
				c++;
			}
			//루트보다 자식이 더 클 경우
			if (heap[root] < heap[c]&& c<i)
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
			
		} while (c < i);
		
	}

	for (int i = 0; i < n; i++)
	{
		cout << heap[i] << " ";
	}
}