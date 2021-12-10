#include <stdio.h>

void sum(int n){
    char s[5];
   s[0] = n/10000;
   s[1]= ((n%10000)/1000);
   s[2] = (((n%10000)%1000)/100);
   s[3] = ((((n%10000)%1000)%100)/10);
   s[4] = (((((n%10000)%1000)%100)%10)/1);
   printf("%d", (s[0] + s[1] + s[2] + s[3] + s[4]));
}
   

int main() {
	
    int n;
    scanf("%d", &n);
    sum(n);
    return 0;
}
