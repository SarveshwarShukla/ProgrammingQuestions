#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    int scores[5];
    public:
        void input(){
            for(int i = 0; i<5; i++){
                cin>>scores[i];
            }
        }
        int calculateTotalScore(){
            int studentScore = 0;
            for(int i = 0; i<5; i++){
                studentScore = studentScore + scores[i];
                
            }
            return studentScore;
        }
};

int main() {