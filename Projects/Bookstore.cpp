/*

    Moksh Shah      03-21-2022
    Online Bookstore Project
    C++

*/

#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

string title, author, publisher, top;
int inventory, sales;

void stocking(void);
void edit(void);

void stocking()
{
    char bTitle[50];
    char bAuthor[50];
    char bPublisher[50];
    char confirmation;
    int bStock = 0;

    cout << setw(60) << "LET'S RESTOCK THE INVENTORY" << endl;

    cout << endl;

    cout << setw(38) << "Please Enter The Title of The Book: ";
    cin.getline(bTitle, 50);
    cout << endl;

    cout << setw(39) << "Please Enter The Author of The Book: ";
    cin.getline(bAuthor, 50);
    cout << endl;

    cout << setw(42) << "Please Enter The Publisher of The Book: ";
    cin.getline(bPublisher, 50);
    cout << endl;

    cout << setw(53) << "Please Enter The How Many Books You Have In Stock: ";
    cin >> bStock;
    cout << endl;

    cout << endl;

    cout << setw(58) << "LET'S CONFIRM THE DETAILS" << endl;

    cout << endl;

    cout << setw(18) << "Book Title: " << bTitle << endl;
    cout << setw(19) << "Book Author: " << bAuthor << endl;
    cout << setw(22) << "Book Publisher: " << bPublisher << endl;
    cout << setw(21) << "Book In Stock: " << bStock << endl;

    cout << endl;

    cout << setw(39) << "ENTER (y) TO CONFIRM OR (n) TO EDIT: ";
    cin >> confirmation;
    cout << endl;

    if(confirmation == 'n')
    {
        edit();
    }
    else
    {
        cout << setw(62) << "CONFIRMED, INVENTORY SAVED !!" << endl;
        cout << endl;
    }

}

void edit()
{

}


int main()
{
    stocking();



    return 0;
}