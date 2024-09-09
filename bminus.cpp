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
    
    Space operator-(Space temp){
        Space a=(*this);
        a.x=x-temp.x;
        a.y=y-temp.y;
        a.z=z-temp.z;
        return a;
    }
    
    friend void display(Space);

};

void display(Space temp){
        cout<<temp.x<<" "<<temp.y<<" "<<temp.z<<endl;
    }
int main(){
    Space s1(10,12,13);
    Space s2(11,-15,18);
    Space s3(0,0,0);
    cout<<"Object s1"<<endl;
    display(s1);
    cout<<"Object s2"<<endl;
    display(s2);
    s3=s1-s2;
    cout<<"Now object s3"<<endl;
    display(s3);
    return(0);
   
}