#include <iostream>

using namespace std;

class Rectangle{
    
    protected:
  int l, b;
  public:
    void display() { 
     cout<<b<<" "<<l<<endl;   
    }
};
class RectangleArea: public Rectangle{
    public:
    void read_input(){
      cin>>b>>l;
    }
    void display(){
        cout<<b*l;
    }
};
