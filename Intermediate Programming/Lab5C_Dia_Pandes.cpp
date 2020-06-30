//******************************************************************
// Filename : Lab5C_Dia_Pandes.cpp
// Date : 2/13/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : Lab 5C
// Problem Title : Buildings
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

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int dv(int ha[], int size, int i, int ctr, int hp){
	if(i < size){
		if (*(ha + i) > hp){
			hp = *(ha + i);
			ctr++;
		}
		i++;
		return dv(ha, size, i, ctr, hp);
	}
	return ctr;
}



int main(){
	ifstream inf;
	inf.open("yen.in");
	
	int s, n;
	float p, tot = 0;
	inf >> s;
	if(s >= 1 && s <= 100){
		while(s--){
			inf >> n >> p;
			if(n >= 1 && n <= 1000 && p >= 1.00 && p <= 1000.00){
				int ha[n], c = 0;
				while(n--){
					inf >> ha[c];
					if(!(ha[c] >= 1 && ha[c] <= 100)) ha[c] = -1;
					c++;
				}
				cout << fixed << setprecision(2) << dv(ha,c,0,0,0)*p << "\n"; 
			}
		}
	}
	
	inf.close();
	return 0;
}





