//******************************************************************
// Filename : dia-lab-2c.cpp
// Date : August 2, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 3
// Problem Title : Programming is Fun v1
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
	//Simple lang ito hahaha, magegets mo naman pero guide nalang ito.
	//Constraints
	if(n >= 1 && n <= 100)
    {
        //Loop N times.
        while(n > 0){
            cout << "Programming is fun!\n";
            n--;
        }
    }
	return 0;
}
