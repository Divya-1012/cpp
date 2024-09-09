#include<iostream>
#include<iomanip>
using namespace std;
class Student{
    private:
    int scores[5];

    public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScores(){
        int ts=0;
        for(int i=0;i<5;i++){
            ts=ts+scores[i];
        }
        return ts;
    }
};
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<"Marks of Student"<<i;
        s[i].input();
    }
    int annascore=s[0].calculateTotalScores();
    int counthigh=0;
    for(int i=1;i<n;i++){
        if(s[i].calculateTotalScores()>annascore){
            ++counthigh;
        }
    }
    cout<<counthigh<<endl;
    return 0;
}