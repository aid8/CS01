#include<iostream>
#include<cmath>
using namespace std;

int main(){
	string bin;
	cout << "Enter Binary: "; cin >> bin;
	int i, total = 0;
	for(i = 0; i < bin.length(); ++i){
		total += ((bin[i] - '0') * pow(2, bin.length()-i-1));
	}
	cout << "Decimal: " << total << endl;
	return 0;
}0
