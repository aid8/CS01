//******************************************************************
// Filename : FR1_DIA.cpp
// Date : 5/1/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : FR1
// Problem Title : 
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
#include<iterator>
#include<vector>
using namespace std;

void computeMoney(vector<int> value, vector<int> &count, int money);
void printResult(vector<int> value, vector<int> count);
	
int main(){
	vector<int> value = {1000,500,200,100,50,20,10,5,1};
	vector<int> count = {0,0,0,0,0,0,0,0,0};
	int money;
	cout << "Please enter amount in Php\t: ";
	cin >> money;
	computeMoney(value,count,money);
	printResult(value,count);
	
	return 0;
}

void computeMoney(vector<int> value, vector<int> &count, int money){
	vector<int>::iterator it1, it2;
	while(money > 0){
		for(it1 = value.begin(), it2 = count.begin(); it1 != value.end(); it1++, it2++){
			if(money >= *it1){
				*it2 += 1;
				money -= *it1;
				break;
			}		
		}
	}
}

void printResult(vector<int> value, vector<int> count){
	vector<int>::iterator it1, it2;
	cout << "-----------------------------------------\n";
	for(it1 = value.begin(), it2 = count.begin(); it1 != value.end(); it1++, it2++){
		cout << "Number of Php " << *it1;
		if(distance(value.begin(), it1) < 6) cout << " bill\t\t: " << *it2 << endl;
		else cout << " coin\t\t: " << *it2 << endl;
	}
	cout << "-----------------------------------------\n";
}
