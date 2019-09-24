/*
Dia, Christian A.
CSDC100 ZC11
9. 24. 19
Algorithm Implementation:

*/

#include<iostream>
using namespace std;

int main(){
    int n[10] = {23,0,0,42,36,29,0,0,25,1};
    int legit = 10, left = 0, right = 1, countSh, totalCountSh = 0;
    cout << "Left: " << left << " , " << "Right: " << legit << endl;
    for(int i = 0; i < 10; ++i) cout << n[i] << " ";
    while(left < legit){
        cout << "Left: " << left << " , " << "Right: " << right  << endl;
        countSh = 0;
        if(n[left] != 0){
            left++;
            right++;
        }
        else{
            legit--;
            while(right < 10){
                n[right-1] = n[right];
                right++;
                countSh++;
            }
            totalCountSh += countSh;
            right = left+1;
        }
        for(int i = 0; i < 10; ++i) cout << n[i] << " ";
        cout << endl;
        cout << "Count here: " << countSh << " , " << "Legit: " << legit << endl;
    }
    cout << "Legit: " << legit << endl;
    cout << "Swap Count: " << totalCountSh << endl;
    return 0;
}
