/*

	Week 2		Disscusion Question 1
	Data Types and Basic Mathematics
	Moksh Shah		01-25-2022

*/

#include <iostream>
using namespace std;

int main()
{
	string name;					// A string to store user's name
	int age;						// A int to store a user's age
	float gpa;						// A float or double to store a user's gpa

	cout << "Please enter your name: \n";			// prompt a user to enter their name
	cin >> name;									// get user's name

	cout << "And what's your age? \n";				// asks for their age
	cin >> age;										// get user's age

	cout << "And lastly what's your GPA? \n";		// asks for their gpa
	cin >> gpa;										// get user's gpa


	age += 3;						// adds 3 to user's age
	gpa += 1.2;						// adds 1.2 to user's gpa


	// prints out user's new age and new gpa by greeting them
	cout << "\nHi " << name << ", hope you having a great day!\nYour new age is " << age << " and your new gpa is " << gpa << "\nHave Great Day and See you soon again!!\n";	


	return 0;
}