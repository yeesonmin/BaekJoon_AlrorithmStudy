#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	int n = 0;
	vector<int> arr;
	int result = 1;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());

	//ÇÙ½É
	for (int i = 0; i < n; i++)
	{
		if (result >= arr[i])
		{
			result += arr[i];
		}
		else
		{
			break;
		}


	}

	cout << result;

}