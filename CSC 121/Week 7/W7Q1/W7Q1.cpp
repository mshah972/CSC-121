/*

    Week 7      Dicussion Question 1
    Moksh Shah  03/04/2021
    Random #'s
    CSC 121

*/

#include <iostream>
#include <random>
#include <ctime>
#include <string.h>
using namespace std;

int num1, num2, num3, num4;

int main()
{
   
    default_random_engine engine{ static_cast<unsigned int>(time(0)) }; 

    uniform_int_distribution<unsigned int> randNum{ 1, 100 };

}