
// Classes and objects

#include <iostream>
#include <cstdio>
using namespace std;

class Student{
    int score[5];

public: void input(){
        scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);
    }
public: int calculateTotalScore(){
        int sum =0;
        for(int i=0; i<5; i++){
            sum+= score[i];
        }
        return sum;
    }
};
int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];
    for(int i=0; i<n; i++){
        s[i].input();
    }
    int kristen_score = s[0].calculateTotalScore();

    int count = 0;
    for(int i=1; i<n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    return 0;
}