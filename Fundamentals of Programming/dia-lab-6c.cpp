//******************************************************************
// Filename : dia-lab-6c.cpp
// Date : September 27, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 6
// Problem Title : Alpha Flip
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

string alpha_flip(string s);

int main(){
    //display
	string d = "", s;
	int n, l; cin >> n;
	if(!(n >= 1 && n <= 100)) return 0; //constraint
	while(n--){ //tigexplain ko sa 6a kung papano ining n--
		cin >> l >> s; //get length and string
		if(l >= 1 && l <= 100){ //constraint
			d += alpha_flip(s) + "\n"; //dai naman siya kaipuhan gamitan ning to_string function ta string naman ang tigrereturn ning function mo
		}
	}
	cout << d;
	return 0;
}

string alpha_flip(string s){
    //magibo ka muna ning empty string
	string ret = "";
	int i;
	//iterate/ loop through the string, garo man lang sa 6a pero ang giniboi mo digdi tigpapalitan mo si lower case to uppercase and vice versa.
	for(i = 0; i < s.length(); ++i){
		if(isalpha(s[i])){
			if(islower(s[i])) ret += toupper(s[i]); //kaag ta sa string mo (ret) si uppercase kadtung lowercase na string na tigkaag sa user
			else ret += tolower(s[i]); //vise versa digdi
		}
		else ret += "*bug here!*"; //pag bakong alphabet siya, kaag mo ining bughere
	}
	//pagtapos na si loop, return mo na si nagibo mong string
	return ret;
}

