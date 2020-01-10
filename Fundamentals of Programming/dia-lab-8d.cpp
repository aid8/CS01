//******************************************************************
// Filename : dia-lab-8d.cpp
// Date : October 25, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 8
// Problem Title : Arrow Through My Heart
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
	string s;
	while(getline(cin, s)){
		//lowercase heart
		size_t f = s.find("heart");
		while(f != string::npos){
			s.replace(f, 5, ">>-h-e-a-r-t->");
			f = s.find("heart", f+1);
		}
		//uppercase heart
		f = s.find("Heart");
		while(f != string::npos){
			s.replace(f, 5, ">>-h-e-a-r-t->");
			f = s.find("Heart", f+1);
		}
		cout << s << '\n';
	}
	return 0;
}
