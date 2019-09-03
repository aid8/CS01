//******************************************************************
// Filename : dia-lab-5d.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 5
// Problem Title : Even From End
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

//hindi naspecify kung ilang list ang ibibgay niya. So ang terminator lang dito yung constraints or kung wala ng input si user.
int main(){
	int N, n, i;
	int na[100]; //Hanggang 100 naman lang yung constraints.
	bool stop = false; //Boolean para pang check kung kailangan na natin ibreak yung main while loop
	string d = ""; //Display string kasi kailangan ioutput pagkatapos ng inputs
	while(cin >> N){
		if(!(N >= 2 && N <= 100)) break; //Constraints
		//loop n times
		for(i = 0; i < N; ++i){
			cin >> na[i]; //get values of the list and store in array
			if(na[i] > 1000 || na[i] < -1000){ //Constraints, stop if condition is satisfied (break the for loop)
				break;
				stop = true;
			}
		}
		if(stop) break; //break the main loop (while)
		//For loop starting at the last of the list and get the even numbers (Kasi starting from last to first yung pagoutput ng even numbers)
		for(i = N-1; i >= 0; --i){
			if(na[i] % 2 == 0) d += to_string(na[i]) + " ";
		}
		d += "\n"; //New line
	}
	cout << d;
	return 0;
}
