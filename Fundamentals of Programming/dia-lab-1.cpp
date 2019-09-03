//******************************************************************
// Filename : dia-lab-1.cpp
// Date : 26 July 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 1
// Problem Title : Lulu’s Lemonades
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
	double price, quota1, quota2, total1 = 0, total2 = 0;
	int i, j;
	
	cin >> quota1;
	for(i = 0; i < 6; ++i) {
		cin >> price;
		total1 += price;
	}
	cout << endl;
	cin >> quota2;
	for(i = 0; i < 6; ++i) {
		cin >> price;
		total2 += price;
	}
	cout << endl;
	
	if(total1 < quota1) cout << "You need to sell more!\n";
	else if(total1 == quota1) cout << "Quota has been met!\n";
	else if(total1 >= quota1 && total1 < (quota1*2)) cout << "Great Job!\n";
	else cout << "You're such a pro!\n";
	
	if(total2 < quota2) cout << "You need to sell more!\n";
	else if(total2 == quota2) cout << "Quota has been met!\n";
	else if(total2 >= quota2 && total2 < (quota2*2)) cout << "Great Job!\n";
	else cout << "You're such a pro!\n";
	
	return 0;
}
