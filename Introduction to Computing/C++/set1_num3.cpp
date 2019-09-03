#include<iostream>
using namespace std;

int main(){
    double electricity, costOfElectricity, cost;
    cin >> electricity >> costOfElectricity;
    cost = (electricity * costOfElectricity) * 1.08;
    cout << cost;
    return 0;
}
