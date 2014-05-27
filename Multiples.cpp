//Anirudh Agarwala
//Program that prints out the numbers divisible by 15, 5, and 3 from 1 to a number of the user's choice
//If a number is divisible by 15 it is only printed once

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int input;

	cout << "This program tells you the numbers that are divisible by 15, 5, and 3 from 1 to a number of your choice." << endl;
	cout << "Please enter your upper limit: ";
	cin >> input;

	for(int i=1; i < (input + 1); i++){
		if(i%15 == 0)
			cout << i << " is divisible by 15." << endl;
		else if(i%5 == 0)
			cout << i << " is divisible by 5." << endl;
		else if(i%3 == 0)
			cout << i << " is divisible by 3." << endl;
	}//end for

	return 0;
}//main
