#include<iostream>
using namespace std;

int main(){
    double length, width, price, total;
    cin >> length >> width >> price;
    total = (length * width) * price;

    if(total <= 250)
        cout << "Good Deal!\n";
    else if(total <= 500)
        cout << "Can Afford!\n";
    else
        cout << "Cannot Afford!\n";

    return 0;
}
