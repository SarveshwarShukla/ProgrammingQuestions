#include <iostream>
using namespace std;
void update(int *a,int *b) {
   int temp;
   temp = (*a)+(*b);
    *a= temp;
    if (temp>2*(*b)) {
     *b =temp - 2*(*b);
    }
    else {
    *b =2*(*b) - temp;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}
