#include<iostream>
using namespace std;
class Score{
    private:
     int score;
    public:
     Score():score(0){}
     Score(int s):score(s){}

     Score& operator++(){
        score+=10;
        return *this;
     }
     Score operator++(int){
        Score temp=*this;
        score+=10;
        return temp;
     }
     void display() const{
        cout<<"Score "<<score<<endl;
     }
};
int main(){
 Score s1(50);
 cout<<"Before increment "<<endl;
 s1.display();
 ++s1;
 cout<<"After prefix "<<endl;
 s1.display();
 s1++;
 cout<<"After postfix "<<endl;
 s1.display();
 return 0;
}