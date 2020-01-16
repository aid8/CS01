//******************************************************************
// Filename : Lab2C_Dia.cpp
// Date : 1/16/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 2C
// Problem Title : Lulu Legendary
// Input :	
// Output :
//
//Honor Code      : This is my own program. I have not received any        
//                unauthorized help in completing this work. I have not  
//                copied from my classmate, friend, nor any unauthorized 
//                resource. I am well aware of the policies stipulated   
//                in the handbook regarding academic dishonesty.              
//                If proven guilty, I won't be credited any points for  
//                this exercise.
//    
// Complete Name : Christian A. Dia
// ID Number :  201910094
// Year-Course : 1-BSCS
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream inFile;
	inFile.open("lulu.in");
	int m, n, i;
	while(inFile >> m){
		inFile >> n;
		if(n <= 1){
			cout << "N/A\n";
			continue;
		}		
		
		for(i = 1; i <= n; ++i){
			cout << m << " ";
			m = (m*2) + 1;
		}
		cout << "\n";
	}
	inFile.close();
	return 0;
}
