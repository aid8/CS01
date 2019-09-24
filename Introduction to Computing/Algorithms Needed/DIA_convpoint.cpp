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
    int legit = 10, left = 0, right = 9, tSh = 0;
    cout << "Left: " << left << " , " << "Right: " << right << " Legit: " << legit << endl;
    for(int i = 0; i < 10; ++i) cout << n[i] << " ";
    cout << endl;
    while(left < right){
        if(n[left] != 0) left++;
        else{
            legit--;
            n[left] = n[right];
            right--;
            cout << "Copied: 1\n";
            tSh += 1;
        }
        cout << "Left: " << left << " , " << "Right: " << right << " Legit: " << legit << endl;
        for(int i = 0; i < 10; ++i) cout << n[i] << " ";
        cout << endl;
    }
    legit -= (n[left] == 0);
    cout << "Legit: " << legit << endl;
    cout << "Swap Count: " << tSh << endl;
    return 0;
}
