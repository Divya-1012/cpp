#include<iostream>
using namespace std;
class Space{
    int x;
    int y;
    int z;
    public:
    Space (int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
    friend void display(Space);

};

void display(Space temp){
        cout<<temp.x<<" "<<temp.y<<" "<<temp.z<<endl;
    }
int main(){
    Space s(10,12,13);
    cout<<"Object s"<<endl;
    display(s);
    -s;
    cout<<"Now object s"<<endl;
    display(s);
    return(0);
   
}