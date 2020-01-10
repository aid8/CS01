//******************************************************************
// Filename : Lab1B_Dia.cpp
// Date : 1/8/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 1B
// Problem Title : Strings
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
using namespace std;

void checkLanguage(string language, string word);

int main(){
	string language, word;
	char ans = 'y';
	cout << "Enter a String Language:";
	cin >> language;
	while(true){
		if(tolower(ans) == 'y'){
			cout << "Enter a word:";
			cin >> word;
			checkLanguage(language, word);
		}
		cout << "Enter a word again? (Y|N):";
		cin >> ans;
		if(tolower(ans) == 'n') break;
	}
	cout << "----END----\n";
	return 0;
}

void checkLanguage(string language, string word){
	int i;
	bool valid = true;
	for(i = 0; i < word.length(); i++){
		if(language.find(word[i]) == string::npos){
			valid = false;
			break;
		}
	}
	cout << word << ", ";
	if(valid) cout << "Welcome Kalahi!\n";
	else cout << "Ho u?!\n";
}
