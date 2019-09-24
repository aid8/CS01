/*
Dia, Christian A.
CSDC100 ZC11
9. 24. 19
Algorithm Implementation:
1.store the binary code as string
2. Get the binary input
3. set total as 0
4. iterate through the binary string
5. We will only add the total if the bit is equal to 1
6. 1 times 2 raised to the length of binary - 1 and the iterator i;
*/


#include<iostream>
#include<cmath>
using namespace std;

int main(){
	system("clear");
	string bin; //store the binary code as string
	cout << "Enter Binary: "; 
	cin >> bin; //Get the binary input
	int i, total = 0; //set total as 0
	for(i = 0; i < bin.length(); ++i){ //iterate through the binary string
		//We will only add the total if the bit is equal to 1
		//1 times 2 raised to the length of binary - 1 and the iterator i;
		if(bin[i] == '1') 
			total += (1 * pow(2, bin.length()-i-1));
	}
	cout << "Decimal: " << total << endl;
	return 0;
}
