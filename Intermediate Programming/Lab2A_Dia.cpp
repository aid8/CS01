//******************************************************************
// Filename : Lab2A_Dia.cpp
// Date : 1/16/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 2A
// Problem Title : Golden String
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

bool checkCons(char c){
	c = tolower(c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return false;
	return true;
}

int main(){
	ifstream inFile;
	inFile.open("golden.in");
	string s;
	while(inFile >> s){
		if(!checkCons(s[0]) || !checkCons(s[s.length()-1]))
			cout << "not ";
		cout << "golden\n";
	}
	inFile.close();
	return 0;
}
