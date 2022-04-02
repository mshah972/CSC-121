/*

	Week 2		Discussion Question 2
	String Manipulation
	Moksh Shah	01-26-2022

*/

#include <iostream>
using namespace std;

int main()
{

	string name;
	int length = name.length();
	char first = name[0];
	char last = name.back();

	cout << "Please enter your first and last name: \n";
	cin >> name;

	cout << "Your name is " << length << " charaters long\n"
		<< "Your first initial is " << first << " and your last initial is " << last << "\n";

	return 0;

}