//******************************************************************
// Filename : dia-lab-4b.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 4
// Problem Title : Product of Odd Integers
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
	int n, prod = 1;
	//Set prod to 1 since pag tigset ko siya as 0, hindi ma mumultiply yung nakuha nating numbers.
	//shortcut na, pwede naman ito, infinite na hihingi ng n, pero may terminator naman
	//tayo yung (n < 0), pag nagsatisfy, ma end na yung loop.
	while(cin >> n){
		if(n < 0) break; //Kung negative numbers, break na yung loop.
		if(n > 100 || n < 1) return 0; //Hindi sinabi yung constraints pero nasa description na yung number is 1 to 100, so pag nag lampas na ng 100 or 0, exit na yung program.
		if(n % 2 == 1) prod *= n; //Pag odd yung number, itimes natin sa product
		//Parang prod = prod * n lang yan, shortcut lang
	}
	cout << prod << endl;
	return 0;
}
