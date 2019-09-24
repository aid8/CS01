/*
Dia, Christian A.
CSDC100 ZC11
9. 24. 19
Algorithm Implementation:
1. Get the 2 binary
2. Configure the binaries, make them equal length
3. Add another binary full of 0, to set them as carry
3. Add from right to left, if the sum of the three(carry, bin, and bin2) is one, then make the output binary as 1,
else if it is two then make the output binary 0 and carry 1, else, fi it is 3, make the output binary as 1 and
carry 1.
4. Repeat 3 until end

*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string bin1, bin2, binC, binF = "";
    cout << "Enter binary 1: "; cin >> bin1;
    cout << "Enter binary 2: "; cin >> bin2;
    int i, b1 = bin1.length(), b2 = bin2.length();
    
    if(b1 > b2) 
    	for(i = 0; i < b1-b2; ++i) bin2 = "0" + bin2;
    else 
    	for(i = 0; i < b2-b1; ++i) bin1 = "0" + bin1;
    	
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
