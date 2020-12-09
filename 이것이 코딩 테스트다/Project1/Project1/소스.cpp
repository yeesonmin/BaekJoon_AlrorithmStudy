#include <string>
#include <vector>

using namespace std;

int solution(vector<int> food_times, long long k) {
    int answer = 0;
    int remain = k % food_times.size();
    int q = k / food_times.size();

    answer = remain-1; //예상위치

    long long sum = 0;
    for (int i = 0; i < food_times.size(); i++) {
        sum += food_times[i];
    }

    if (sum <= k){
        return -1;
    }
    
    int remainch = remain;
    for (int i = 0; i < food_times.size(); i++) {
        if (remainch > 0) {
            if (food_times[i] - (q + 1) >= 0) {
                food_times[i] -= (q + 1);
                remainch--;
            }
            else
            {
                food_times[i] = 0;

            }
            
        }

    }


    for (int i = 0; i < food_times.size(); i++){
        if (answer <= remain-1){
            if (food_times[answer] - (q + 1) < 0) {
                answer++;
                if (answer == food_times.size())
                {
                    answer = 0;
                }
            }
            else
            {
                return answer+1;
            }
        }
        else
        {
            if (food_times[answer] - q < 0) {
                answer++;
                if (answer == food_times.size())
                {
                    answer = 0;
                }
            }
            else
            {
                return answer+1;
            }
        }
        
    }
}

void main()
{
    vector<int> food_times = { 3,1,2 };
    long long k = 5;
    solution(food_times, k);
}