//******************************************************************
// Filename : dia-lab-7a.cpp
// Date : October 4, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 7
// Problem Title : Count Me Down
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

int get_count(int count);
void print_count(int count);

int main(){
	int countdown, n;
	char ans;
	while(true){
		cout << "Enter number: ";
		cin >> n;
		countdown = n;
		while(countdown > 0){
			print_count(countdown);
			countdown = get_count(countdown);
		}
		cout << "Another[y/n]? ";
		cin >> ans;
		if(tolower(ans) == 'n') break;
	}
	return 0;
}

int get_count(int count){
	return count - 1;
}

void print_count(int count){
	cout << "T minus " << count << " and counting\n";
}



