#include <iostream>
#include <algorithm>
using namespace std;

//���� ���̺귯�� Ű(Key) ���� ����
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
        Fruit("�ٳ���", 2),
        Fruit("���", 5),
        Fruit("���", 3)
    };


}