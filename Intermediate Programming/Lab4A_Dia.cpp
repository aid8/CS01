//******************************************************************
// Filename : Lab4A_Dia.cpp
// Date : 1/28/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 4A
// Problem Title : Divine Gigi
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
// Complete Name : Christian A. Dia
// ID Number :  201910094
// Year-Course : 1-BSCS
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************

#include<iostream>
using namespace std;


bool checkDivine(int n, int i){
	int divineNums[14] = {4,44,444,7,77,777,47,447,477,474,74,774,774,747};
	if(i < 14){
		if(n % divineNums[i] == 0)
			return true;
		else
			return checkDivine(n,++i);
	}
	return false;
}

int main(){
	int t, n; cin >> t;
	string d = "";
	while(t--){
		cin >> n;
		if(n >= 1 && n <= 1000){
			if(checkDivine(n,0)) 
				d += "YES\n";
			else 
				d += "NO\n";
		}
	}
	cout << d << "\n";
	return 0;
}
