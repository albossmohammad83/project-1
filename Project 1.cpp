/*Mohammad Abdelrahman
  CIS 278 
  Project 1
  A program to chcek an ID number in a special format 
  */

#include <iostream>
using namespace std;

int main(){

	int id;

	do {
		cout << "Enter ID number, or -1 to exit" << endl; // prompt the user to enter the ID
		cin >> id;                                       // place the ID that the user input in variable id  
		
		if (2 <= (id / 10000) && (id / 10000) < 3) // check to see if the number has 5 digits and begins with 2
			cout << "Valid ID" << endl;  // message the user that the ID is valid
		else
			cout << "Invalid ID, please try again" << endl; // message the user that the ID is not valid 
		}
	while (!(id == -1)); // if the user entered -1 exit the loop 
		
	return 0;
}

