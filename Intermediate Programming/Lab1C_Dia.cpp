//******************************************************************
// Filename : Lab1C_Dia.cpp
// Date : 1/8/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 1C
// Problem Title : 2D Arrays
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

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void CreateMulTable(int name_Table[100][100], int row_size_mulTable, int col_size_mulTable);
void print(int name_Table[100][100], int row_size_mulTable, int col_size_mulTable);

int main(){
	int mulTable[100][100];
	cout << "WELCOME TO CHRISTIAN'S MULTIPLICATION TABLE CREATOR!\n";
	cout << "Please enter the size of the table (row x column): ";
	string ans;
	int row, column;
	getline(cin, ans);
	string::size_type pos = ans.find('x');
	row = stoi(ans.substr(0,pos-1));
	column = stoi(ans.substr(pos+1,ans.length()-pos-1));
	CreateMulTable(mulTable, row, column);
	print(mulTable,row,column);
	return 0;
}

void CreateMulTable(int name_Table[100][100], int row_size_mulTable, int col_size_mulTable){
	int i, j;
	for(i = 1; i <= row_size_mulTable; i++){
		for(j = 1; j <= col_size_mulTable; j++){
			name_Table[i-1][j-1] = j * i;
		}
	}
}

/*
void print(int name_Table[100][100], int row_size_mulTable, int col_size_mulTable){
	int i, j;
	cout << "\t";
	for(i = 1; i <= col_size_mulTable; i++) cout << i << "\t";
	cout << endl;
	for(i = 1; i <= row_size_mulTable; i++){
		cout << i << "\t";
		for(j = 1; j <= col_size_mulTable; j++){
			cout << name_Table[i][j] << "\t";
		}
		cout << endl;
	}
}*/

void print(int name_Table[100][100], int row_size_mulTable, int col_size_mulTable){
	int i, j, maxW = to_string(name_Table[row_size_mulTable-1][col_size_mulTable-1]).length(), setWF = 5;
	int maxL = (maxW*2*col_size_mulTable) + setWF - 1;
	cout << name_Table[row_size_mulTable-1][col_size_mulTable-1] << endl;
	
	if(maxL > 2){
		maxL++;
		setWF++;
	}
	if(row_size_mulTable < 5 && col_size_mulTable < 5) setWF = min(row_size_mulTable, col_size_mulTable) +2;
	for(i = 0; i < maxL; i++) cout << "-"; cout << endl;
	cout << setw(setWF-(maxW == 2)) << left << " ";
	
	for(i = 1; i <= col_size_mulTable; i++){
		cout << setw(maxW) << right << name_Table[0][i-1] << setw(maxW) << right << "|";
	}
	cout << endl;
	for(i = 1; i <= row_size_mulTable; i++){
		for(j = 0; j < maxL; j++) cout << "-"; cout << endl;
		cout << setw(3) << right << i << setw(maxW) << left << "|";
		for(j = 1; j <= col_size_mulTable; j++){
			cout << setw(maxW) << right << name_Table[i-1][j-1] << setw(maxW) << right << "|";
		}
		cout << endl;
	}
	for(i = 0; i < maxL; i++) cout << "-"; cout << endl;
}

