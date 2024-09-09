#include<iostream>
#include<iomanip>
using namespace std;
class Time{
    int hours;
    int min;
    int sec;
    public:
    Time(){
        hours=min=sec=0;
    }
    Time(int h,int m,int s){
        hours=h;
        min=m;
        sec=s;
    }
    void display(){
        cout<<hours<<":"<<min<<":"<<sec<<endl;
    }
   
    
    Time operator+(Time temp){
        Time a=(*this);
        a.hours= hours+temp.hours;
        a.min=min+temp.min;
            if(a.min>60){
                int t=a.min/60;
                a.hours=a.hours+t;
                a.min=a.min%60;
            }
        a.sec=sec+temp.sec;
        if(a.sec>60){
            int b=a.sec/60;
            a.min=a.min+b;
            a.sec=a.sec%60;
        }
        return a;
    }
    
    

};


int main(){
    Time t1(10,45,13);
    Time t2(11,35,18);
    Time t3(0,0,0);
    cout<<"Object t1"<<endl;
    t1.display();
    cout<<"Object t2"<<endl;
    t2.display();
    t3=t1+t2;
    cout<<"Now object t3"<<endl;
    t3.display();
    return(0);
   
}