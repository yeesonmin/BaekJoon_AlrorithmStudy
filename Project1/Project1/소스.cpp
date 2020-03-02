#include <iostream>
#include <algorithm>
using namespace std;

//힙정렬 복습
//나의 방식

int main()
{
	int n = 9;
	int heap[9] = { 7,6,5,8,3,5,9,1,6 };


	//최대힙 구조 : 부모가 자식 보다 큰 구조
	for (int i = 1; i < n; i++) {

		
		if (heap[c] > heap[p])
		{
			int temp = heap[p];
			heap[p] = heap[c];
			heap[c] = temp;
		}
		
	}

	//오름차순 힙 구조
	

	for (int i = 0; i < n; i++)
	{
		cout << heap[i] << " ";
	}
}