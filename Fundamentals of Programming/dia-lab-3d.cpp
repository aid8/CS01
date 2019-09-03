//******************************************************************
// Filename : dia-lab-2c.cpp
// Date : August 2, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 3
// Problem Title : se7en
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
	int n;
	//Kailangan nanaman natin ng string since sa huli nanaman dapat yung output. Kailangan muna istore yung mga gusto natin ioutput sa user.s
	string disp = "";
	//While true, meaning na gumawa ako dito ng infinity loop, kasi laging true edi lagi siyang mag loloop, pero ok lang siya kasi may terminator
	//naman tayo sa loob ng loop, yung if(n < -1000 || n > 1000) break; Ibig sabihin magbrebreak/sisirain/magiging false na yung loop pag nag satisfy yang condition
	while(true)
	{
        cin >> n;
		if(n < -1000 || n > 1000)
            break;

        //Kung divisible yung number by 7, edi dapat "se7en" ioutput natin, at naglagay na rin ako ng space kasi space sepearated output daw according sa sample output
		if(n % 7 == 0)
			disp += "se7en "; //Lagay sa string container natin
		else
            //Kailangan din iconvert muna si integer to string bago ilagay sa container, at space rin.
			disp += to_string(n) + " ";
	}

	cout << disp << endl;
	return 0;
}
