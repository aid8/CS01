#include<iostream>
using namespace std;

int main(){
    double curBalancce, newPurchases, totalPayments, newBalance;
    cin >> curBalance >> newPurchases >> totalPayments;
    newBalance = (curBalance - (totalPayments + newPurchases));

    if(newBalance < 100)
        newBalance = newBalance * 1.08;
    else if(newBalance >= 100 && newBalance < 500)
        newBalance = newBalance * 1.12;
    else
        newBalance = newBalance * 1.16;

    return 0;
}
