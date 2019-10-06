//******************************************************************
// Filename : dia-lab-7d.cpp
// Date : October 4, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 7
// Problem Title : Visualizing Linear Function
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

int f_slope(int x1, int y1, int x2, int y2);
int f_intercept(int x1, int y1, int a);

int main(){
	int x1, y1, x2, y2;
	char ans;
	while(true){
		cout << "Enter first coordinates(x1,y1): ";
		cin >> x1 >> y1;
		cout << "Enter second coordinates (x2,y2): ";
		cin >> x2 >> y2;
		cout << "The slope of line going through the point (" << x1 << "," << y1 << ")" << "and the point (" << x2 << "," << y2 << "): " << f_slope(x1, y1, x2, y2) << endl;
		cout << "The y-intercept of the point (" << x1 << "," << y1 << "): " << f_intercept(x1, y1, f_slope(x1, y1, x2, y2)) << endl;
		cout << "Another[y/n]? ";
		cin >> ans;
		if(tolower(ans) == 'n') break;
	}
	return 0;
}

int f_slope(int x1, int y1, int x2, int y2){
	return ((y2-y1)/(x2-x1));
}
int f_intercept(int x1, int y1, int a){
	return (y1 - (a * x1));
}

