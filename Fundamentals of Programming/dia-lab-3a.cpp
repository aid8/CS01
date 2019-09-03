//******************************************************************
// Filename : dia-lab-2c.cpp
// Date : August 2, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 3
// Problem Title : Even
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
	int n, a, b;
	cin >> n;
	//Dagdag lang sa info kung bakit kailangan ng string.
	//Kung hindi tayo gumamit ng string ang mangyayari, pag naginput ka ng a at b, maooutput agad yung lahat na even number.
	//Pero dapat ioutput natin pagkatapos na ng lahat na test cases, so kailangan muna natin ito istore sa string.
	string disp = "";

	//Constraints sa N
	if(n >= 1 && n <= 100)
    {
        //While loop N times
        while(n > 0)
        {
            //Get input of a and b
            cin >> a >> b;
            //COnstraints sa a and b.
            if((a >= 1 && a <= 50) && (b >= 51 && b <= 100))
            {
                //According sa constrains, laging mas mataas yung b, so ang gagawin nito, maloop at ichecheck niya ang lahat na
                //numbers between a and b including a at b since <=
                while(a <= b)
                {
                    //Yung modulo operator %, hinahanap niya yung remainder pag divide siya by a number.
                    //Example: 10 % 3: So hahanapin niya ang remainder ng 10 / 3, so pag dinivide natin yung 10 by 3, ang result is 3, remainder 1
                    //So ang value ng 10 % 3 is 1.
                    //Dito hinahanap natin ang mga even numbers so dapat pag nagdivide by 2, dapat walang remainder., kaya a % 2 == 0
                    if(a % 2 == 0)
                    {
                        //Lalagay natin siya sa loob ng string container na disp kung divisible siya by 2, at kailangan rin ng space since
                        //doon sa sample output, separated siya by space.
                        //Ginamit natin yung to_string(a) para iconvert mo na yung a to string since yung a baga integer, bawal naman mag add
                        //ng integer sa string, so convert muna bago add.
                        //Btw incase na hindi mo pa alam, yung += shortcut lang yan. Same man lang siya sa disp = disp += to_string....
                        //Nag += tayo kasi madagdag tayo ng value, pag nag disp = to_string().... ginamit mo, edi hindi mastostore yung mga previous na nilagay mo sa string
                        //Palaging na rereplace siya ng bago. So dapat += talaga.
                        disp += to_string(a) + " ";
                    }
                    //ma increment na tayo sa a, so parang next number naman ang ichecheck kung even ba siya or odd.
                    a++;
                }
            }
            //Kailangan natin mag newline each testcase, kagaya lang sa sample output
            disp += "\n";
            n--;
        }
    }
	cout << disp;
	return 0;
}
