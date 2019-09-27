//******************************************************************
// Filename : dia-lab-6b.cpp
// Date : September 27, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 6
// Problem Title : My Power
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

int my_power(int x, int y);

int main(){
	string d = "";
	int x, y;
	while(cin >> x){
		cin >> y;
		if((x >= 1 && x <= 10) && (y >= 0 && y < 10)){
			d += to_string(my_power(x,y)) + '\n';
		}
	}
	cout << d;
	return 0;
}

int my_power(int x, int y){
	int res = x, i;
	if (y == 0) return 1;
	for(i = 1; i < y; i++){
		res *= x;
	} 
	return res;
}
