//******************************************************************
// Filename : dia-lab-4e.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 4
// Problem Title : Find ‘N’
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
	int n, i; cin >> n;
	bool f = false; //Boolean, diniscuss na ito ni sir, ang value lang nito ay true or false. So false muna siya sa una since hindi panamam natin nahahanap yung N
	char c;
	if(!(n >= 1 && n <= 100)) return 0; //Constraints, exit pag lampas ng 100 or less than 1 yung output
	//For loop, mag loloop siya n times. Explained sa 4a.
	for(i = 0; i < n; ++i){
		cin >> c; //Get the character
		if(c == 'N') f = true; //Kung may nahanap tayong 'N' character, gawin na nating true yung f. Kahit ilang beses pa siya nakahanap ng N, gagawin itong true so no problem kung multiple N ang nilagay. True parin.
	}
	if(f) cout << "Found it!\n"; //Hindi na kailangan ng (f == true) shortcut na ang if(f), so kung may nahanap tayong N, display found it.
	else cout << "Sorry!\n";
	return 0;
}
