//******************************************************************
// Filename : dia-lab-4d.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 4
// Problem Title : Boxes
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
	int n, i, j, k, t; cin >> n;
	string s = ""; //Container
	if(!(n >= 1 && n <= 100)) return 0; //Constraints, exit pag hindi nag satisfy kasi may negation.
	//For loop n times, explained sa 4a. Ma loop siya n times since maghihingi tayo ng
	//output ng n times.
	for(i = 0; i < n; ++i){
		char c;
		cin >> t >> c; //get number and character
		if(!(t >= 2 && t <= 100)) return 0; //Constraints
		
		//Parang 4c man lang ito na may condition lang. pag 7 siya, idodouble natin yung size ng box, so may t*2 ako sa condition. Tapos nag gamit ako ng string as a container kasi dapat hindi natin ioutput kaagad pag enter ng value. Chat ka nalang kung nalilito, or kung may hindi ka naiintindihan tungkol dito.
		if(t == 7){
			for(j = 0; j < t*2; ++j){
				for(k = 0; k < t*2; ++k) s += c;
				s += "\n";
			}
			s += "\n";
		}
		//At kung even siya, kailangan natin iprint yung box, kung odd, hindi na dapat iprint yung box (According sa problem), so even sized boxes lang ang ipriprint natin.
		if(t % 2 == 0){
			for(j = 0; j < t; ++j){
				for(k = 0; k < t; ++k) s += c;
				s += "\n";
			}
			s += "\n";
		}
	}
	//Print na yung display
	cout << s;
	return 0;
}
