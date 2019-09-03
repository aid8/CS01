#include<iostream>
using namespace std;

int main(){
    double x, y, z, ave;
    cin >> x >> y >> z;
    if(x > 0){
        ave = (x+y+z)/3;
        //btw pwede mo naman ishortcut na cout << (x+y+z)/3;
        cout << ave;
    }
    else
        cout << "Bad data";

    return 0;
}
