//******************************************************************
// Filename : Lab3B_Dia.cpp
// Date : 1/21/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 3B
// Problem Title : What is it?
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

string charType(char c){
	if(isalpha(c)) return "ALPHA";
	if(isdigit(c)) return "DIGIT";
	if(ispunct(c)) return "SYMBOL";
	return "WHITESPACE";
}

int main(){
	ifstream inFile;
	inFile.open("identify.in");
	string s;
	while(getline(inFile, s)){
		if(!inFile.eof()){
			for(int i = 0; i < s.length(); ++i){
				cout << charType(s[i]) << "\n";
			}
			cout << "\n";
		}
	} 
	inFile.close();
	return 0;
}
