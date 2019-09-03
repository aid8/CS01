//******************************************************************
// Filename : dia-lab-5b.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 5
// Problem Title : Number Printer
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
	int n, i, j;
	string ans; //Kailangan ito para sa yes or no na input
	//Infinite loop, may terminator din ito (pag "n" yung answer exit program na)
	while(true){
		cout << "Enter number of rows to print: ";
		cin >> n;
		//Gawa ng nested for loop, 1 ang starting ko para maprint ko yung i, kasi pag 0 siya magkakaproblema tayo sa 2nd loop at pag kuha ng formula ng (i*2)-1
		for(i = 1; i <= n; ++i){
            //Dito sa nested for loop, kailangan iprint yung number na i sa first loop ng (i*2)-1 times based doon sa sample output
            /*
            1
            222 //ang length nito ay (i*2)-1, ang i dito is 2 since 1 yung start ng i natin sa first loop, so ang value ay (2*2) = 4 - 1 = 3
            33333 //same din dito, i = 3, (3 * 2) = 6 - 1 = 5
            */
			for(j = 0; j < (i*2)-1; ++j){
				cout << i;
			}
			cout << endl;
		}
		while(true){
		    //Pang check lang kung gusto niya pa mag output, pag invalid yung output mag loloop at mag tatanong ulit siya
			cout << "Another [y/n]? ";
			cin >> ans;
			if(ans == "y") break;
			else if(ans == "n") return 0;
			else cout << "Please enter y or n.\n";
		}
	}
	return 0;
}
