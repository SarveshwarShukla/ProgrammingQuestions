#include <stdio.h>


int main() {
    int n, arr[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int n2 = n;
    for(int i = 0; i<n/2; i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n2-1];
        arr[n2-1] = temp;
        n2--;
    }
    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
        printf(" ");
    }
    
    
    return 0;
}
