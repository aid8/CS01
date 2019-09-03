#include<iostream>
using namespace std;

int main(){
    double curBalance, newPurchases, totalPayments, newBalance;
    cin >> curBalance >> newPurchases >> totalPayments;
    newBalance = (curBalance - (totalPayments + newPurchases)) * 1.12;
    cout << newBalance;
    return 0;
}
