/*
Dia, Christian A.
CSDC100 ZC11
9. 24. 19
Algorithm Implementation:

*/

#include<iostream>
using namespace std;

int main(){
	string s = "sophisticated";
	int sm;
	cout << s << endl;
	for(int i = 0; i < s.length(); ++i){
		sm = i;
		for(int j = i; j < s.length(); ++j){
			if(s[sm] > s[j]) sm = j;
 		}
 		swap(s[i], s[sm]);
 		cout << s << endl;
	}
	return 0;
}
