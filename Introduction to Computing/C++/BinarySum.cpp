#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string bin1, bin2, binC, binF = "";
    cout << "Enter binary 1: "; cin >> bin1;
    cout << "Enter binary 2: "; cin >> bin2;
    int i, b1 = bin1.length(), b2 = bin2.length();
    if(b1 > b2) for(i = 0; i < b1-b2; ++i) bin2 = "0" + bin2;
    else for(i = 0; i < b2-b1; ++i) bin1 = "0" + bin1;
    for(i = 0; i < max(b1,b2); ++i) binC += "0";

    for(i = max(b1,b2)-1; i >= 0; --i){
        int s = (bin1[i]-'0') + (bin2[i]-'0') + (binC[i] - '0');
        if(s == 3){
            binF = "1" + binF;
            if(i == 0) binF = "1" + binF;
            else binC[i-1] = '1';
        }
        else if(s == 2){
            binF = "0" + binF;
            if(i == 0) binF = "1" + binF;
            else binC[i-1] = '1';
        }
        else if (s == 1) binF = "1" + binF;
        else binF = "0" + binF;
    }
    cout << binF << endl;
    return 0;
}
