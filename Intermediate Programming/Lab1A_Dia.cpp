//******************************************************************
// Filename : Lab1A_Dia.cpp
// Date : 1/8/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 1A
// Problem Title : Arithmetic Operators
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
using namespace std;

void computeMoney(int value[], int count[], int money);
void printResult(int value[], int count[]);


int main(){
	int value[9] = {1000,500,200,100,50,20,10,5,1};
	int count[9] = {0,0,0,0,0,0,0,0,0}, money;
	cout << "Please enter amount in Php\t: ";
	cin >> money;
	
	computeMoney(value,count,money);
	printResult(value,count);
	
	return 0;
}

void computeMoney(int value[], int count[], int money){
	int i;
	while(money > 0){
		for(i = 0; i < 9; i++){
			if(money >= value[i]){
				count[i]++;
				money -= value[i];
				break;
			}		
		}
	}
}

void printResult(int value[], int count[]){
	int i;
	cout << "-----------------------------------------\n";
	for(i = 0; i < 9; i++){
		cout << "Number of Php " << value[i];
		if(i < 6) cout << " bill\t\t: " << count[i] << endl;
		else cout << " coin\t\t: " << count[i] << endl;
	}
	cout << "-----------------------------------------\n";
}
