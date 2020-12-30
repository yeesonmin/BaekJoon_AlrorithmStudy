#include <iostream>
#include <algorithm>
using namespace std;

//정렬 라이브러리 키(Key) 기준 정렬
class Fruit {
public:
    string name;
    int score;
    Fruit(string name, int score) {
        this->name = name;
        this->score = score;
    }

    bool operator <(Fruit& other) {
        return this->score < other.score;
    }
};

void main()
{
    int n = 3;
    Fruit fruits[] = {
        Fruit("바나나", 2),
        Fruit("사과", 5),
        Fruit("당근", 3)
    };


}