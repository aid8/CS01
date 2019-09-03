//******************************************************************
// Filename : dia-lab-4c.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 4
// Problem Title : Box
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
	int n, i, j;
	char c;
	cin >> n >> c;
	if(!(n >= 2 && n <= 100)) return 0; //Constraints, exit kung hindi nag satisfy
	//For loop, explained in 4a.
	for(i = 0; i < n; ++i){
		//Pero dito kailangan ng nested loop since itong for loop sa baba nito (for(j = 0...)),
		//iooutput lang yung character n times, example 5 yung n tapos yung character *.
		//Kung isang loop lang nilagay mo kagaya ng for loop ko sa baba, ang output lang yan ay "*****",
		//pero kailangan pa natin iloop ang "*****" 5 times para maging box siya, yan na yung purpose ng outer loop, yung nasa tass na loop (for(i = 0....)).
		for(j = 0; j < n; ++j) cout << c;
		cout << endl; //kung hindi mo ito nilagay continous ang pag print, hindi magiging box yung output.
	}
	return 0;
}
