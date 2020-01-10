//******************************************************************
// Filename : dia-lab-8a.cpp
// Date : October 25, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 8
// Problem Title : Name
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

int main()
{
	string d = ""; //display
	int t; //testcase
  cin >> t;
	if(t < 1 || t > 100) //constraint
    return 0;
  
	string f, l; //first name, last name
  /*
  same lang ang while(t--) sa
  while(t > 0){
    t--;
  }
  shortcut lang yan ginibo ko sa baba
  */
	while(t--){
		cin >> f >> l; //get first name ang last name
    //add to the display string si first character ning first name tapos icapital, same as last name
    //f[0] para maaccess si first character ning first name
    //example, kinaag niya Christian Aid
    /*
    f = christian
    l = aid

    f[0] = c
    f[1] = h
    f[2] = r
    ....

    l[0] = a
    l[1] = i
    l[2] = d

    Kaya baga 0 ang kinaag ko para maaccess si first character
    Tapos nagamit ako ning toupper para iuppercase si first character
    tapos tig convert ko to character char() ta naigigi kaya siyang integer pag toupper (dai ko aram kung tano), so tigconvert man lang siya to character
    */
		d = d + char(toupper(f[0])) + "." + char(toupper(l[0])) + ".\n";
    
	}
	cout << d;
	return 0;
}
