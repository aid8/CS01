//******************************************************************
// Filename : Lab4C_Dia.cpp
// Date : 1/28/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 4C
// Problem Title : Casino
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


int getStrat(int t, int n, string &s, int e){
	if(n > 0){
		if(t % 2 == 0){
			e += 3;
			t += 3;
			s += "B";
		}
		else{
			e--;
			t--;
			s += "A";	
		}
		return getStrat(t,--n,s,e);
	}
	return e;
}

int main(){
	int n, t, earnings;
	string d = "";
	for(int i = 0; i < 2; i++){
		string s = "";
		cin >> n >> t;
		if((n >= 1 && n <= 1000000) && (t >= 1 && t <= 1000000)){
			earnings = getStrat(t,n,s,0);
			d += "strategy: " + (s + "\ntotal earned: P") + to_string(earnings) + ".00\n";
		}
	}
	cout << d;
	return 0;
}
