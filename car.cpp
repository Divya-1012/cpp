#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string city[]={"Delhi","Mumbai","Chennai","Kolakata"};
    string carm[]={"Maruti","Tata","Wagenar","XUV"};
    int sr[4][4]={0};
    int citycode,carcode;
    char choice='y';
    do{
        cout<<"***Main Menu***"<<endl;
        cout<<"Press [0] for Delhi"<<endl;
        cout<<"Press [1] for Mumbai"<<endl;
        cout<<"Press [2] for Chennai"<<endl;
        cout<<"Press [3] for Kolkata"<<endl;
        cout<<"Press [0] for Maruti"<<endl;
        cout<<"Press [1] for Tata"<<endl;
        cout<<"Press [2] for Wagenar"<<endl;
        cout<<"Press [3] for XUV"<<endl;
        cout<<"Enter City code";
        cin>>citycode;
        cout<<"Enter car code";
        cin>>carcode;
        sr[citycode][carcode]++;
        cout<<"Do you want to continue - y/n?";
        cin>>choice;
    }while(choice!='n');

    cout<<"Survey Report";
    for (int i=0;i<4;i++){
        cout<<setw(15)<<carm[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++){
       cout<<setw(15)<<city[i];

    for(int j=0;j<4;j++){
       cout<<setw(15)<<sr[i][j];
    }
    cout<<endl; 
    }
       
}