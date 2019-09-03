//******************************************************************
// Filename : dia-lab-2c.cpp
// Date : 26 July 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 2
// Problem Title : Min-Max-Sum
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
	int n, t, num, highest, lowest, first = 0;
	//Same explanation lang sa 2b
	string disp = "";
	cin >> n;

	//According sa constraints
	if(n >= 1 && n <= 100)
    {
        while(n > 0)
        {
            cin >> t;
            first = 0; //Kailangan natin na gawin siyang zero every testcase since kailangan natin makua yung first input every testcase at assign sila as highest and lowesst.
            //Constrains ulit
            if(t >= 1 && t <= 100)
            {
                while(t > 0){
                    cin >> num;
                    //at constrains nanaman
                    if(num >= -100 && num <= 100)
                    {
                        //Dito nag check kung yung input ay pinakaunang input sa sets of number then iaasign ito as highest and lowest, since ma iterate rin at macompare sa paghanap ng lowest at highest.
                        if(first == 0){
                            highest = num;
                            lowest = num;
                            first = 1; //so nakuha na natin yung first, so iset nalang natin siya as 1 meaning na tapos na yung pagkuha ng first inputs.
                        }
                        else{
                            //Kung mas mataas yung current number na ibinigay kaysa sa largest, then assign mo yung current number as largest.
                            if(num > highest) highest = num;
                            //Kung mas mababa naman yung current number na ibinigay kaysa sa lowest natin, then assign mo yung current number as lowest.
                            if(num < lowest) lowest = num;
                        }
                    }
                    t--;
                }
                //Gumamit ako dito ng to_string function since bawal mag add ng integer sa string, so kailangan muna natin iconvert ito to string bago iadd sa disp string natin.
                disp += to_string(lowest) + " " + to_string(highest) + " " + to_string(lowest + highest) + "\n"; //at syempre newline para hindi magdugtong yung output natin;
            }
            n--;
        }
	}
	//Since nakalagay naman dito yung gusto natin ioutput, cout nalang yung disp.
	cout << disp;
	return 0;
}
