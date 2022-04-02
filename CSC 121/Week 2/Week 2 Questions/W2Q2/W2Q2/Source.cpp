/*

	Week 2		Discussion Question 2
	String Manipulation
	Moksh Shah	01-26-2022
	CSC 121

*/

#include <iostream>
using namespace std;

int main()
{

	string name;															// String to store user's name

	cout << "Please enter your name: \n";									// prompt to enter your name 
	cin >> name;															// store's name in variable name
		
	int length = name.length();												// int variable to get the length of the name. length() is used to 
	char first = name[0];													// char variable to get the first character
	char last = name.back();												// char variable to get the last character

	cout << "Your name is " << length << " charaters long\n"
		<< "Your first character is " << first << " and your last character is " << last << "\n";

	return 0;

}