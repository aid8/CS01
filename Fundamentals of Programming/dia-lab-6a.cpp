//******************************************************************
// Filename : dia-lab-6a.cpp
// Date : September 27, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 6
// Problem Title : Count Upper
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

int count_upper(int size, string s);

int main(){
	string d = "", s;
	int n, l; cin >> n;
	if(!(n >= 1 && n <= 100)) return 0;
	while(n--){
		cin >> l >> s;
		if(l >= 1 && l <= 100)
			d += to_string(count_upper(l, s)) + "\n";
	}
	cout << d;
	return 0;
}

int count_upper(int size, string s){
	int i, c = 0;
	for(i = 0; i <= size; ++i) 
		if (isupper(s[i])) c++;
	return c;
}
