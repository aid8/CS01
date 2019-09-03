//******************************************************************
// Filename : dia-lab-4a.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 4
// Problem Title : Summing Integers
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
	int n, i, j, sum = 0; //Starting sum is 0
	cin >> n;
	//Constraints, pag hindi nag satisfy yung condition mag eexit na yung program
	//Nilagyan ko ng !, parang negation lang (Discrete hahaha)
	if(!(n >= 1 && n <= 100)) return 0; 
	//For loop, ma loop siya from 0 to n-1, so kung 3 yung n, ma loop man siya 3 times
	//Tapos ang value ng i is 0, 1, 2. Pero hindi naman kailangan ang value ng i basta
	//nag iterate siya.
	//Kung coconvert ito sa while loop ganito siya
	/*
	i = 0;
	while(i < n){
		//do something
		i++;
	}
	*/
	for(i = 0; i < n; ++i){
		cin >> j;
		//Check ng constraints, at kung nagsatisfy, add na ito sa sum 
		if(j >= -1000 && j <= 1000) sum += j; 
		else return 0; //Kung hindi nag satisfy yung condition above, then exit na yung program
	}
	cout << sum << endl; //Output sum
	return 0;
}
