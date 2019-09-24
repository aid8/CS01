/*
Dia, Christian A.
CSDC100 ZC11
9. 24. 19
Algorithm Implementation:

*/

#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	int n;
	cout << "Decimal: "; cin >> n;
	while(n != 0){
		s.push(int(n%2));
		n /= 2;
	}
	cout << "Binary: ";
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	return 0;
}
