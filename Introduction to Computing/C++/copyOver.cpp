#include<iostream>
using namespace std;

int main(){
    int n[] = {23,0,0,42,36,29,0,0,25,1}, m[] = {}, c = 0, i = 0;
    while(i < sizeof(n)/sizeof(n[0])){
        cout << "Left: " << i+1 << endl;
        if(n[i] != 0){
            m[c] = n[i];
            c++;
        }
        i++;
        for(int j = 0; j < c; ++j) cout << m[j] << " ";
        cout << endl;
    }
    return 0;
}
