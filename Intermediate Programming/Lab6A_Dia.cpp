//******************************************************************
// Filename : Lab6A_Dia.cpp
// Date : 3/05/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 6A
// Problem Title : Records
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
// Complete Name : Christian A. Dia
// ID Number :  201910094
// Year-Course : 1-BSCS
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

struct Student{
    string id, last, first;
    char mid;
    int q1, q2, me, fe;
};


char get_letter_grade(float g){
    char a;
    if(g >= 90) a = 'A';
    else if(g >= 80) a = 'B';
    else if(g >= 70) a = 'C';
    else if(g >= 60) a = 'D';
    else a = 'F';
    return a;
}

int main() {
	ifstream gd;
	gd.open("gradebook.in");
    int t;
    gd >> t;
    while(t--){
        Student s;
        float tot = 0;
        
        gd >> s.id;
        gd.ignore();
        getline(gd, s.first);
        getline(gd, s.last);
        gd >> s.mid >> s.q1 >> s.q2 >> s.me >> s.fe;
        
        tot += (((s.q1+s.q2)/20.0) * 100)*0.25;
        tot += (((s.me/100.0) * 100))*0.25;
        tot += (((s.fe/100.0) * 100))*0.50;

        cout << "ID Number: " << s.id 
        << "\nName: " << s.first << ", " << s.last << " " << s.mid << "."
        << "\nQ1: " << s.q1 << "\nQ2: " << s.q2 << "\nME: " << s.me
        << "\nFE: " << s.fe << "\nNG: " << round(tot) << "\nLG: "
		<< get_letter_grade(round(tot)) << "\n\n";
    }
	gd.close();
	return 0;
}
