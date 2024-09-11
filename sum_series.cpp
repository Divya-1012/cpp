#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Input Number of terms";
    cin>>n;
    for(int i=1;i<=5;i++){
        int x=(pow(10,i))-1;
        sum=sum+x;
    }
    cout<<sum;
    return 0;
}

