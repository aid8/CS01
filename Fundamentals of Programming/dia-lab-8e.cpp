//******************************************************************
// Filename : dia-lab-8e.cpp
// Date : October 25, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 8
// Problem Title : Antonio’s Message
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
#include<cmath>
using namespace std;

int main(){
	string s;
	cout << "Antonio's Text Message: "; cin >> s;
	int i, j, w = ceil(sqrt(s.length()));
	cout << "Coded Text Message: ";
	for(i = 0; i < w; ++i){
		for(j = i; j < s.length(); j+=w){
			cout << s[j];
		}
		cout << " ";
	}
	return 0;
}
