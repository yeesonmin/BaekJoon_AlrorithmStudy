#include <string>
#include <vector>

using namespace std;

int solution(vector<int> food_times, long long k) {
    int answer = 0;

    answer = k % food_times.size();//이상적인 위치

    //무지가 음식을 먹음
    for (int i = 0; i < food_times.size(); i++)
    {
        food_times[i] -= k / food_times.size();
    }
    for (int i = 0; i < food_times.size() % k; i++)
    {
        food_times[i]--;
    }

    for (int i = 0; i < food_times.size(); i++)
    {
        if (food_times[answer] > 0)
        {
            return answer + 1;
        }
        else
        {
            answer++;
            if (answer == food_times.size())
            {
                answer = 0;
            }
        }
    }

    return -1;

}

void main()
{
    vector<int> food_times = { 3,1,2 };
    long long k = 5;
    solution(food_times, k);
}