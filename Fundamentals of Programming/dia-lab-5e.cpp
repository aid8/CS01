//******************************************************************
// Filename : dia-lab-5e.cpp
// Date : August 23, 2019
// Subject : CSDC101 - Fundamentals of Programming
// First Semester, SY 2019 - 2020
// Activity : Laboratory Exercise 5
// Problem Title : Quiz Record
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
	int N, M, Q, i, j, n;
	cin >> N >> M;
	//N is number of students, M is number of quizzes.
	if(!(N >=1 && N<= 100)) return 0; //Constraints
	string d = ""; //Kailangan dito nito since input muna bago iprint lahat.
	int A[N][M]; //N = Row, M is column
	//Nested for loop kailangan para sa pag kuha ng input ng 2D array.
	for(i = 0; i < N; ++i){
		for(j = 0; j < M; ++j){
			cin >> n;
			if(n >= 0 && n <= 10){ //Constraint
				A[i][j] = n;
			}
		}
	}
	cin >> Q; //Query, kung ilang beses siya maghihingi ng data
	if(!(Q >= 1 && Q <= 100)) return 0; //Constraints
	for(i = 0; i < Q; ++i){
		char sm, qm;
		int si, qi;
		cin >> sm >> si >> qm >> qi; //Sm si 'S', si yung number kung anong student, qm si 'Q', qi yung number kung anong quiz
		if(sm == 'S' && qm == 'Q'){ //Check kung S yung unang letter at Q yung para sa quiz
			if((si >= 1 && si <= N) && (qi >= 1 && qi <= M)){ //Constaraints
				d += to_string(A[si-1][qi-1]); //-1 kasi array starts with 0
				d += "\n";
			}
		}
	}
	cout << d;
	return 0;
}
