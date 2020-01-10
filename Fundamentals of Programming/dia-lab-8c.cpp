//******************************************************************
// Filename : dia-lab-8c.cpp
// Date : October 25, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 8
// Problem Title : Minimum Substring Flag
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
	string d = "";
	int t; cin >> t;

	if(t < 1 || t > 100) //constraint
    return 0;
	while(t--)
  {
		string A, B; cin >> A >> B;
    //Ginamit ko nalang digdi si find function ning string, para gamiton arog man lang kayan ginibo ko, tapos yan string::npos ibig sabihun mayong nahanap yan kung equal siya diyan, ibig sabihun nposition
		if(B.find(A) != string::npos) 
      d += "YES\n";
		else 
      d += "NO\n";
	}
	cout << d;
	return 0;
}
