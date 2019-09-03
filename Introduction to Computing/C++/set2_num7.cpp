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
            if(x == 0)
                cout << "Unable to compute the value of 1/x"'
            else{
                cout << (x * x);
                cout << sin(x);
                cout << (1/x);
            }
        }
    }

    return 0;
}
