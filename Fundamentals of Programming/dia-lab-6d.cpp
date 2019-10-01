//******************************************************************
// Filename : dia-lab-6d.cpp
// Date : September 27, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 6
// Problem Title : Yassi’s List
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
	string d = "";
	int n, t, i;
	cin >> n >> t;
	if(!(n >= 0 && n <= 1000) || !(t >= 0 && t <= 100)) return 0; //constraint
	int arr[n]; //gibo ka ning empty array na size n, ang n si kung pirang numbers ang tatao
	for(i = 0; i < n; ++i) cin >> arr[i]; //kaag kani sa array si n inputs.
	//t-- explained sa 6a
	while(t--){
        //gibo kitang boolean na by default false siya na invalid tapos false man siya na outofBounds
		bool invalid = false, outOfBounds = false;
		int a, b;
		char c;
		cin >> a >> b >> c; //a and b si numbers, c si operator
        //digdi ichecheck ta kung valid si operator (mulitply add and minus lang), kung dai siya valid, gigibuhun tang true si boolean na invalid ta sala siya
		if(c != '+' && c != '*' && c != '-') invalid = true;
		if((a >= 1 && a <= n) && (b >= 1 && b <= n)){ //check kung dai siya out of bounds / si 2 number na tig tao between 1 and n
            //kung valid si operator, di apply mo na si operation tapos kaag mo sa display string si result
			if(!invalid){
				if(c == '+') d += to_string((arr[a-1]+arr[b-1]));
				else if(c == '-') d += to_string((arr[a-1]-arr[b-1]));
				else if(c == '*') d += to_string((arr[a-1]*arr[b-1]));
			}
		}
		//kung out of bounds siya / lampas si number na tinao sa n or less than 1, di itrue ta si out of bounds
		else outOfBounds = true;

		//Kung true si invalid tapos outOfBounds, di add mo sa display na outofbounds siya tapos invalid.
		if(invalid && outOfBounds) d += "​Out of Bounds and Invalid Operator";
		//pero kung invalid lang, edi invalid operator lang kaag mo.
		else if(invalid) d += "Invalid Operator";
		//pero kung outOfBounds lang, edi kaag mo lang outofbounds sa display string.
		else if(outOfBounds) d += "Out of Bounds";
		d += '\n';
	}
	cout << d;
	return 0;
}

