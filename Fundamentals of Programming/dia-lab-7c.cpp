//******************************************************************
// Filename : dia-lab-7c.cpp
// Date : October 4, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 7
// Problem Title : Health Bar
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

void damage(string &s, int &p, int n);
void regenerate(string &s, int &p, int n);
void display(string s, int p);

int main(){
	char sign;
	int num, hp = 100;
	string hpBar = "";
	while(cin >> sign){
		cin >> num;
		if((num >= 1 && num <= 100) && (sign == '-' || sign == '+')){
			if(sign == '-') damage(hpBar, hp, num);
			else if(sign == '+') regenerate(hpBar, hp, num);
			display(hpBar,hp);
		}
	}
	return 0;
}

void damage(string &s, int &p, int n){
	p -= n;
	if(p < 0) p = 0;
	int pBar = p/10, i;
	string newHpBar = "[";
	for(i = 0; i < 10; ++i){
		if(i < pBar) newHpBar += '=';
		else newHpBar += ' ';
	}
	newHpBar += ']';
	s = newHpBar;
}
void regenerate(string &s, int &p, int n){
	p += n;
	if(p > 100) p = 100;
	int pBar = p/10, i;
	string newHpBar = "[";
	for(i = 0; i < 10; ++i){
		if(i < pBar) newHpBar += '=';
		else newHpBar += ' ';
	}
	newHpBar += ']';
	s = newHpBar;
}
void display(string s, int p){
	cout << s << " ";
	if(p == 0) cout << "DEAD";
	else cout << p << "%";
	cout << endl;
}
