//******************************************************************
// Filename : Lab5A_Dia_Pandes.cpp
// Date : 2/11/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 5A
// Problem Title : Non Fib
// Input :	
// Output :
//
//Honor Code      : This is my own program. I have not received any        
//                unauthorized help in completing this work. I have not  
//                copied from my classmate, friend, nor any unauthorized 
//                resource. I am well aware of the policies stipulated   
//                in the handbook regarding academic dishonesty.              
//                If proven guilty, I won't be credited any points for  
//                this exercise.
//    
// Complete Name : Christian A. Dia, Miguel Isaiah D. Pandes
// ID Number :  201910094, 201910222
// Year-Course : 1-BSCS
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************

#include<iostream>
#include<vector>
using namespace std;

int checkNF(int n){
	vector<int> nf, f = {0,1};
	
	while(true){
		f.push_back(f[f.size()-2] + f[f.size()-1]);
		for(int i = f[f.size()-2]; i < f[f.size()-1]-1; i++){
			nf.push_back(i+1);
			if(nf.size() == n){
				return nf[nf.size()-1];
			}
		}
	}

}

int main(){
	int t, n, *ans;
	cin >> t;
	while(t--){
		cin >> n;
		*ans = checkNF(n);
		cout << *ans << endl;
	}
	return 0;
}
