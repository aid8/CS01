//******************************************************************
// Filename : dia-lab-7b.cpp
// Date : October 4, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 7
// Problem Title : Let’s fly
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
	char ps[7][5], l;
	int i, j, n, s;
	//Set passenger seat
	for(i = 0; i < 7; ++i){
		ps[i][0] = ('0' + (i+1));
		for(j = 1; j < 5; ++j) ps[i][j] = ('A'+j-1);
	}
	cin >> n;
	if(!(n >= 1 && n <= 100)) return 0;
	while(n--){
		//s is seat number, l is seat letter
		cin >> s >> l;
		
		if((s >= 1 && s <= 7) && (l == 'A' || l == 'B' || l == 'C' || l == 'D')){
		 	//int(l-65) convert A to 0, B to 1 (ASCII)
			if(ps[s-1][int(l-65)+1] != 'X'){
				ps[s-1][int(l-65)+1] = 'X';
				//Print seats
				for(i = 0; i < 7; ++i){
					for(j = 0; j < 5; ++j){
						d += ps[i][j];
						d += " ";
					}
					d += '\n';
				}
			}
			else d += "Sorry, not available!\n";
			d += '\n';
		}
	}
	cout << d;
	return 0;
}


