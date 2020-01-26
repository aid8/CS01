//******************************************************************
// Filename : Drill1A_Dia.cpp
// Date : 1/23/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Drill 1
// Problem Title : Piolo Pascal
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
#include <fstream>
using namespace std;

ofstream outFile;

void printPascal(int num, int count, int n, int i, int j)
{
	int k;
    if(i < count){
    	if(j == 0)for(k = 0; k < count-i; k++) outFile << "  ";
    	
        if(n > j){
        
        	if (i == 0 || j == 0) num = 1;
            else num = num * (i - j + 1) /j;
            outFile << num << "   ";
            printPascal(num, count, i, i, j+1);
            
        }
        else{
            j = 0;
            num = 1;
            if(i == 1) outFile << "1   1\n";
            else outFile << num << "\n";
            printPascal(num, count, i, i+1, j);
        }
        
    }
}  

int main()
{
	ifstream inFile;
	inFile.open("piolo.in");
	
    int count, num = 1;
    inFile >> count;
    
    outFile.open("piolo.out");
    printPascal(num, count, 0, 0, 0);
    
    inFile.close();
    outFile.close();
    return 0;
}
