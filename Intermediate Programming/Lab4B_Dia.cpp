//******************************************************************
// Filename : Lab4B_Dia.cpp
// Date : 1/28/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 4B
// Problem Title : Baller’s Bananas
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
#include<fstream>
using namespace std;


int getTotal(int k, int y, int i, int total){
	if(i <= y){
		total += k*i;
		return getTotal(k,y,++i,total);
	}
	return total;
}


int main(){
	ifstream inFile;
	ofstream outFile;
	inFile.open("mamba.in");
	outFile.open("legend.out");
	int n, k, y, i, total;
	inFile >> k >> n >> y;
	if((n >= 1 && n <= 1000) && (k >= 1 && k <= 1000) && (n >= 0 && n <= 109)){
		total = getTotal(k,y,0,0);
		if(n-total >= 0) 
			outFile << "0\n";
		else
			outFile << total-n << "\n";
	}
	inFile.close();
	outFile.close();
	return 0;
}
