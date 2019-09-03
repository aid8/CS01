#include<iostream>
#include<cmath> //kaipuhan ni para sa sin function
using namespace std;

int main(){
    int x;

    while(true){
        cin >> x;
        if(x == 999)
            break; //end the loop
        else{
            cout << (x * x);
            cout << sin(x);
            cout << (1/x);
        }
    }

    return 0;
}
