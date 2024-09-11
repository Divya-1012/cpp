#include <iostream>
using namespace std;

struct s {
    char name[20];
    int u;
    float b;
};

void calc(int u, float &b) {
    if (u <= 100)
        b = u * 0.6;
    else if (u > 100 && u <= 200)
        b = 100 * 0.6 + (u - 100) * 0.8;
    else if (u > 200)
        if(u>300){
        b = 100 * 0.6 + 100 * 0.8 + (u - 200) * 0.9;
        b=b+((15/100)*b);
        }
        b = 100 * 0.6 + 100 * 0.8 + (u - 200) * 0.9;
    
}

int main() {
    int n;
    cout << "Enter number of users: ";
    cin >> n;
    struct s d[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of consumer: ";
        cin >> d[i].name;
        cout << "Enter number of units: ";
        cin >> d[i].u;
        calc(d[i].u, d[i].b); 
    }

    cout << "\nConsumer Bill Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << d[i].name << endl;
        cout << "Bill: Rs." << d[i].b << endl;
    }

    return 0;
}
