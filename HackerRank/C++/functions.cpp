#include <iostream>
using namespace std;

int maxOfTwo(int x, int y){
    if (x>y) {
    return x;
    }
    return y;
}
int max_of_four(int a, int b, int c, int d){
    int temp;
    temp = maxOfTwo(a, b);
    temp = maxOfTwo(temp, c);
    temp = maxOfTwo(temp, d);
    return temp;
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a,b,c,d);
    
    return 0;
}
