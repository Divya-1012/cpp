#include<iostream>
using namespace std;
void multiply(int n){
    int m;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=n;j++){
            m=i*j;
            cout<<j<<"*"<<i<<"="<<m<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Input the number upto: ";
    cin>>n;
    multiply(n);
}