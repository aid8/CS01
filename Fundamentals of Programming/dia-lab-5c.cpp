//******************************************************************
// Filename : dia-lab-5c.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 5
// Problem Title : Reverse
// Input :
// Output :
//
// Honor Code :
// This is my own program. I have not received any        
// unauthorized help in completing this work. I have not  
// copied from my classmate, friend, nor any unauthorized 
// resource. I am well aware of the policies stipulated   
// in the handbook regarding academic dishonesty.              
// If proven guilty, I won't be credited any points for  
// this exercise.     
//
// Complete Name : Christian A. Dia
// ID Number : 2019-1-0094
// Year-Course : 1-BSCS
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************
#include<iostream>
using namespace std;

int main(){
	char letterBox[10];
	int i, n;
	for(i = 0; i < 10; ++i){
		cin >> letterBox[i];
		if(letterBox[i] == '.'){
			n = i;
			break;
		}
	}
	for(i = n-1; i >= 0; --i) cout << letterBox[i];
	cout << endl;
	return 0;
}
