//******************************************************************
// Filename : dia-lab-2b.cpp
// Date : 26 July 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 2
// Problem Title : Drawing Characters
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
	int n, t;
	cin >> n;
	char ch;
	/*
	So basically ang string is a group of characters.
	Gumawa ako dito ng container gamit string,
	so dito ko ilalagay yung dapat icout ko,
	since sinabi baga ni sir na dapat pakainput ng numbers saka
	siya ma output.
	*/
	string disp = "";
	//According sa constraints ito lang yung dapat na number ng testcase
    if(n >= 1 && n <= 100)
    {
        while(n > 0)
        {
            cin >> t >> ch;
            //COnstraints ulit.
            if(t >= 1 && t <= 100){
            //Kailangan icheck natin kung valid yung character na nainput ng user.
                if(ch != '*' && ch != '#' && ch != '@')
                    disp += "Cannot draw!";
                else{
                    while(t > 0)
                    {
                        //Kung valid yung character, lalagay ito ng t times ng ch sa loob ng disp;
                        disp += ch;
                        t--;
                    }
                }
                disp += "\n"; //Kailangan natin mag lagay ng endline since kung hindi tayo lalagay nito, continuous lang yung output sa isang line.
                n--;
            }
        }
        //So yan cout disp nalang yung kailangan para idisplay since naka store naman diyan yung gusto ko ipakita sa user.
        cout << disp;
    }
	return 0;
}
