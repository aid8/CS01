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
#include<fstream>
using namespace std;

int checkNF(int n, vector<int> &nf, int &f1, int &f2, int &cur){
	if(nf.size() >= n){
		return nf[n-1];
	}
	while(true){
		int i, temp;
		if (cur < f2 && cur != 0){
			i = cur;
		}
		else{
			temp = f2;
			f2 = f1 + f2;
			f1 = temp;
			i = f1;
		}
		for(i; i < f2-1; i++){
			nf.push_back(i+1);
			if(nf.size() >= n){
				cur = i+1;
				return nf[n-1];
			}
		}
		cur = f2;
	}
}

int main(){
	ifstream inf;
	inf.open("alex.in");
	int t, n, *ans, f1 = 0, f2 = 1, cur = 0;
	inf >> t;
	vector<int> nf;
	while(t--){
		inf >> n;
		ans = new int(checkNF(n, nf, f1, f2, cur));
		cout << *ans << endl;
	}
	return 0;
}

