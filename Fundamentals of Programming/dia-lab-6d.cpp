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
	if(!(n >= 0 && n <= 1000) || !(t >= 0 && t <= 100)) return 0;
	int arr[n];
	for(i = 0; i < n; ++i) cin >> arr[i];
	while(t--){
		bool invalid = false, outOfBounds = false;
		int a, b;
		char c;
		cin >> a >> b >> c;
		if(c != '+' && c != '*' && c != '-') invalid = true;
		if((a >= 1 && a <= n) && (b >= 1 && b <= n)){
			if(!invalid){
				if(c == '+') d += to_string((arr[a-1]+arr[b-1]));
				else if(c == '-') d += to_string((arr[a-1]-arr[b-1]));
				else if(c == '*') d += to_string((arr[a-1]*arr[b-1]));
			}
		}
		else outOfBounds = true;
		if(invalid && outOfBounds) d += "​Out of Bounds and Invalid Operator";
		else if(invalid) d += "Invalid Operator";
		else if(outOfBounds) d += "Out of Bounds";
		d += '\n';
	}
	cout << d;
	return 0;
}

