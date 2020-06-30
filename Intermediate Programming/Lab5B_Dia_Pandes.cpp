//******************************************************************
// Filename : Lab5B_Dia_Pandes.cpp
// Date : 2/11/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 5B
// Problem Title : Counting Mountains
// Input :	
// Output :
//
//Honor Code      : This is my own program. I have not received any        
//                unauthorized help in completing this work. I have not  
//                copied from my classmate, friend, nor any unauthorized 
//                resource. I am well aware of the policies stipulated   
//                in the handbook regarding academic dishonesty.              
//                If proven guilty, I won't be credited any points for  
//                this exercise.
//    
// Complete Name : Christian A. Dia, Miguel Isaiah D. Pandes
// ID Number :  201910094, 201910222
// Year-Course : 1-BSCS
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	ifstream inf;
	inf.open("mountains.in");	

	vector<string> m;
	string l, lm;

	while(getline(inf, l)){		
		m.push_back(l);
	}

	lm = m[m.size()-1];
	auto it = lm.begin();
	int c = 0;

	while(it != lm.end()){
		if(*it == '/' || *it == '\\')
			c++;
		it++;
	}
	cout << c/2 << "\n";
	inf.close();
    return 0;
}
