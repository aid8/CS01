//******************************************************************
// Filename : FR2_DIA.cpp
// Date : 5/1/2020
// Subject : Intermediate Programming
// Second Semester, SY 2019 - 2020
// Activity : FR2
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
#ifdef _WIN32 
#define cls system("cls"); 
#elif linux
#define cls system("clear"); 
#endif
using namespace std;

struct Node{
    int data;
    Node* next;
};

//Get the size of the node
int getSize(Node* head){
    int c = 0;
    while(head != NULL){
        c++;
        head = head->next;
    }
    return c;
}

//Delete at nth position
void deleteAtPos(Node** head, int p){
    Node* temp = *head;
    if(p == 1){
        *head = temp->next;
        delete temp;
        return;
    }

    for(int i = 0; i < p-2; ++i) temp = temp->next;
    Node* temp1 = temp->next;
    temp->next = temp1->next;;
    delete temp1;
    return;
}

//Insert data (will be inserted in ascending order)
void insert(Node** head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    
   	Node* temp1 = *head;
   	//make head as new data if head is null
   	if(temp1 == NULL){
   		*head = temp;
		return;	
	}
	//make head as new data if the value is lower than head
	else if(temp1->data > x){
		temp->next = *head;
        *head = temp;
        return;
	}
	//find where to insert itself
    while(temp1->next != NULL){
    	if(temp1->next->data < x) temp1 = temp1->next;
		else break;
    }
    temp->next = temp1->next;
	temp1->next = temp;
}

//Print the elements in the linked list
void print(Node* head){
	if(head == NULL){
		cout << "Empty.\n";
		return;	
	}
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

//Menu Display
char displayChoices(){
	char c = ' ';
	bool hasError = false;
	while(true){
		cls;
		if(hasError) cout << "\t\tPlease input a valid choice!\n\n"; 
		else cout << "\t\tWelcome to Linked List!\n\n";
		cout << "\t[1] Insert a number in the Linked List.\n";
		cout << "\t[2] Delete a number in the Linked List.\n";
		cout << "\t[3] Print the elements of the Linked List.\n";
		cout << "\t[4] Exit.\n\n";
		cout << "\tChoice: "; cin >> c;
		if(c < '1' || c > '4') hasError = true;
		else return c;
	}
}

int main(){
    Node* head = NULL;
    char c;
    int x;
    string con;
    bool hasError;
    while(true){
    	hasError = false;
    	c = displayChoices();
    	if(c == '1'){
    		cls;
    		cout << "What number do you want to insert? "; cin >> x;
			insert(&head,x);
		}
		while(c == '2'){
    		cls;
    		if(hasError) cout << "Invalid position, please try again!\n\n";
    		cout << "This is the list:\n";
    		print(head);
    		cout << "\nAt what position do you want it to delete? "; cin >> x;
    		if(x < 1 || x > getSize(head)) hasError = true;
			else{
				deleteAtPos(&head, x);
				break;
			}
		}
		if(c == '1' || c == '2' || c == '3'){
			if(c == '3') cls;
			cout << "\nThese are the elements inside the Linked List:\n";
			print(head);
			cout << "\nPress Enter to Continue...";
			cin.ignore();
			getline(cin, con);
		}
		else if(c == '4') break;
	}
    return 0;
}


