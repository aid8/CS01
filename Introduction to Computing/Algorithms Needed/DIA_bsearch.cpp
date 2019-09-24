/*
Dia, Christian A.
CSDC100 ZC11
9. 24. 19
Algorithm Implementation:

*/


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num, i; 
	cout << "Enter size: "; cin >> num;
	int n[num] = {};
	cout << "Enter values: ";
	for(i = 0; i < num; ++i) cin >> n[i];
	int l = 0, r = num, m, s = 6;
	cout << "Enter value to search: "; cin >> s;
	bool found = false;
	sort(n, n+num);
	while(!found && r >= l){
		m = (r+l)/2;
		if(n[m] == s) found = true;
		else if(n[m] > s) r = m-1;
		else l = m + 1;
	}
	found ? cout << s << " found at index " << m : cout << s << " Not found!";
	cout << endl; 
	return 0;
}
