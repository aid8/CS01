//******************************************************************
// Filename : Drill1B_Dia.cpp
// Date : 1/23/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Drill 1
// Problem Title : Palindrome
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

bool checkPalindrome(string s);
string makePalindrome(string s, int i);
string reverseWord(string s, string st);

int main(){
	string s;
	cout << "Enter Word: ";
	cin >> s;
	if(checkPalindrome(s))
		cout << "Word is already palindrome!\n";
	else
		cout << "Word is not palindrome!\nConvertion: " << makePalindrome(s,0) << endl;

	return 0;
}

bool checkPalindrome(string s){
	if (s.length() == 1) return true;
	return reverseWord(s,"") == s;
}

string makePalindrome(string s, int i){
	if(!checkPalindrome(s)){
		s.insert(s.length()-i,1,s[i]);
		cout << s << endl;
		return makePalindrome(s,++i);
	}
	return s;
}

string reverseWord(string s, string st){
	if(s.length() > 0){	
		st += s[s.length()-1];
		s.erase(s.end()-1);
		return reverseWord(s, st);
	}
	return st;
}

