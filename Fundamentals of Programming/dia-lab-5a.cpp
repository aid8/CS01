//******************************************************************
// Filename : dia-lab-5a.cpp
// Date : August 16, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 5
// Problem Title : Multi-User Dungeon
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
	int x = 5, y = 5; //Initial position
	string ans; //pang kuha ng direction ng user.
	//Gawa ng infinite loop, may terminator naman na kung x yung answer, magbrebreak yung loop
	while(true){
		cout << "Your location is " << x << " , " << y << endl;
		cout << "Select direction to move [n, s, e, w] or press x to exit: ";
		cin >> ans;
		//Nasa description naman ito, check lang kung anong direction at iadd o minus.
		if(ans == "n") y++;
		else if(ans == "s") y--;
		else if(ans == "e") x++;
		else if(ans == "w") x--;
		else if(ans == "x") break; //exit loop na pag x
		else cout << "Invalid direction!\n"; //Pag hindi valid yung input ng user, ito lalabas
	}
	cout << "Bye!\n"; //Goodbye
	return 0;
}
