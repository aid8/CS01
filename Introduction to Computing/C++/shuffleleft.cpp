#include<iostream>
using namespace std;

int main(){
	int n[10] = {23,0,0,42,36,29,0,0,25,1}; //{0, 48, 32, 0, 72, 0, 46, 32, 0, 52};
	int l, r, i, j, countSh = 0, totalCountSh = 0, legit = 10;
	for(j = 0; j < 10; ++j) cout << n[j] << " ";
	cout << endl;
	for(i = 0; i < 10; ++i){
        cout << "Left: " << i+1 << endl;
        countSh = 0;
		if(n[i] == 0){
			for(j = i; j < 10-1; ++j){
				n[j] = n[j+1];
                countSh++;
			}
            legit--;
			totalCountSh += countSh;
		}
		for(j = 0; j < 10; ++j) cout << n[j] << " ";
		cout << endl;
		cout << "Count here: " << countSh << " , " << "Legit: " << legit << endl;
	}
	cout << "Total Count: " << totalCountSh << endl;
	cout << "Legit: " << legit << endl;
	return 0;
}
