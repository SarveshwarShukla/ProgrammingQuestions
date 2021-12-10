#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int *marks, int nos, char gender){
    int sum = 0;
    if(gender=='b'){
        for(int i = 0; i<nos; i+=2){
            sum = sum +  marks[i];
        }
       
    }
    else if(gender == 'g'){
        for(int i = 1; i<nos; i+=2){
            sum = sum + marks[i];
        }
     
    }
    return sum;
}
int main() {