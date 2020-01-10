//******************************************************************
// Filename : dia-lab-8b.cpp
// Date : October 25, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 8
// Problem Title : Cardo’s Words
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

int CountWords(string s);

int main(){
	char a = 'y'; //current answer is yes
  //Nagibo akong infinite loop pero may taga break man kita sa laog ning while loop
	while(true)
  {
		string s;
		cout << "Enter sequence of words in CamelCase: ";
		cin >> s;
		cout << "No. of words found: " << CountWords(s) << "\nAnother[y/n]? ";
		cin >> a;
    //so kung ang answer niya n, mag brebreak na yung loop
    //nagtolower ako just incase na capital n yung malagay, macoconvert siya to small letter
		if(tolower(a) == 'n') 
      break;
	}
	return 0;
}

int CountWords(string s)
{
	int c = 0, i;
  //si i yung iterator, c yung pangcount
	for(i = 0; i < s.length(); ++i) 
    //Kung uppercase yung letter mag +1 ka sa c meaning may nahanap ka na capital letter at bilangin ito.
    if(isupper(s[i])) 
      c++;
	return c;
}
