//******************************************************************
// Filename : dia-lab-2a.cpp
// Date : 26 July 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 2
// Problem Title : Positive, Negative, Zero v2
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

	int n;
	cin >> n;
	while(n != 1001){
		if(n < 0) cout << "negative\n";
		else if (n == 0) cout << "zero\n";
		else cout << "positive\n";
		cin >> n;
	}
	return 0;
}
