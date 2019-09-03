//******************************************************************
// Filename : dia-lab-2c.cpp
// Date : August 2, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 3
// Problem Title : Bank
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
	int m, b, n, a;
	char ch; //Para sa type of transaction ('D' or 'W')
	//Kailangan ulit string since last yung output natin.
	string disp = "";
	//Kunin si maintaining, current balance, at ilang process
	cin >> m >> b >> n;

	//Constraints
	if((m >= 500 && m <= 10000) && (b >= 500 && b <= 100000) && (n >= 1 && n <= 100))
	{
	    //Loop n times (ilang transaction)
        while(n > 0)
        {
            //Kunin si c (yung type ng transaction) at a (kung ilan)
            cin >> ch >> a;

            //Constraints
            if(a >= 1 && a <= 10000)
            {
                //Deposit
                if(ch == 'D')
                {
                    b += a;
                    //Kailangan din na gumamit ng to_string since ang b ay integer.
                    disp += to_string(b);
                }
                //Withdraw
                else if(ch == 'W')
                {
                    //b-a para malaman natin kung pag mininus natin ng a(yung gusto niya iwithdraw) at pag ito ay
                    //mas mababa sa maintaining, edi bawal ka mag withdraw.
                    //(b-a) pang check lang natin ito, iba ito sa b -= a.
                    if((b-a) < m)
                        disp += "Cannot withdraw!";
                    else
                    {
                        //Kung pag minus, hindi naman siya less than maintaining, iminus na natin yung a sa current balance.
                        b -= a;
                        //Convert int to string then add to disp
                        disp += to_string(b);
                    }
                }
            }
            //Newline sa output per transaction
            disp += "\n";
            n--;
        }
	}
	cout << disp;
	return 0;
}
