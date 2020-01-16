//******************************************************************
// Filename : Lab2B_Dia.cpp
// Date : 1/16/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 2B
// Problem Title : Maximum
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
	inFile.open("maxxie.in");
	int size, n, i, highest;
	while(inFile >> size){
		for(i = 0; i < size; ++i){
			inFile >> n;
			if(i == 0 || n > highest) 
				highest = n;
		}
		cout << highest << "\n";
	}
	inFile.close();
	return 0;
}
