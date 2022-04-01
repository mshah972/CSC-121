/*

    Moksh Shah      03-21-2022
    Online Bookstore Project
    C++

*/

#include <iostream>
#include <unistd.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <cstring>
#include <cstdio>
using namespace std;

string title, author, publisher, top;
int inventory, sales;

void stocking(void);
void edit(void);
void buy(void);
void sell(void);
void display(void);

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
    cin >> bTitle;
    cout << endl;

    cout << setw(39) << "Please Enter The Author of The Book: ";
    cin >> bAuthor;
    cout << endl;

    cout << setw(42) << "Please Enter The Publisher of The Book: ";
    cin >> bPublisher;
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
        system("cls");
        cout << setw(62) << "CONFIRMED, INVENTORY SAVED !!" << endl;
        cout << endl;
        title = bTitle;
        author = bAuthor;
        publisher = bPublisher;
        inventory = bStock;
        sales = 0;
        ofstream outfile;
        outfile.open("Bookstore.txt", ios::app);
        outfile << "\nBook Title : " << title << endl;
        outfile << "Book Author : " << author << endl;
        outfile << "Book Publisher : " << publisher << endl;
        outfile << "Book In Stock : " << inventory << endl;
        outfile << "Book Sales : " << sales << endl;
        outfile.close();
    }

    cout << endl;

    cout << setw(60) << "PRESS ENTER TO CONTINUE" << endl;
    cin.ignore();
    cin.get();

    system("cls");

    return;
}

void edit()
{
    char bTitle[50];
    char bAuthor[50];
    char bPublisher[50];
    int bStock = 0;
    int edit;
    char confirmation;

    cout << setw(60) << "LET'S EDIT THE BOOK DETAILS" << endl;

    cout << "\nWhich Book Details Do You Want To Edit?\n";
    cout << setw(18) << "1. Book Title\n";
    cout << setw(18) << "2. Book Author\n";
    cout << setw(18) << "3. Book Publisher\n";
    cout << setw(18) << "4. Book In Stock\n";
    cout << setw(18) << "5. Exit\n";

    cout << setw(39) << "Enter Your Choice: ";
    cin >> edit;

    cout << endl;

    if(edit == 1)
    {
        cout << setw(39) << "Please Enter The Title of The Book: ";
        cin.getline(bTitle, 50);
        cout << endl;
    }
    else if(edit == 2)
    {
        cout << setw(39) << "Please Enter The Author of The Book: ";
        cin.getline(bAuthor, 50);
        cout << endl;
    }
    else if(edit == 3)
    {
        cout << setw(42) << "Please Enter The Publisher of The Book: ";
        cin.getline(bPublisher, 50);
        cout << endl;
    }
    else if(edit == 4)
    {
        cout << setw(53) << "Please Enter The How Many Books You Have In Stock: ";
        cin >> bStock;
        cout << endl;
    }
    else if(edit == 5)
    {
        cout << setw(62) << "EXITING, INVENTORY NOT SAVED !!" << endl;
        cout << endl;
    }
    else
    {
        cout << setw(62) << "INVALID INPUT, INVENTORY NOT SAVED !!" << endl;
        cout << endl;
    }
    

    cout << endl;

    cout << setw(58) << "LET'S CONFIRM THE DETAILS" << endl;
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
        cout << setw(62) << "EXITING, INVENTORY NOT SAVED !!" << endl;
    }
    else
    {
        system("cls");
        cout << setw(62) << "CONFIRMED, INVENTORY SAVED !!" << endl;
        cout << endl;
        title = bTitle;
        author = bAuthor;
        publisher = bPublisher;
        inventory = bStock;
        sales = 0;
        ofstream outfile;
        outfile.open("Bookstore.txt", ios::app);
        outfile << "\nBook Title : " << title << endl;
        outfile << "Book Author : " << author << endl;
        outfile << "Book Publisher : " << publisher << endl;
        outfile << "Book In Stock : " << inventory << endl;
        outfile << "Book Sales : " << sales << endl;
        outfile.close();
    }


}

void buy()
{
    char bTitle[50];
    char bAuthor[50];
    char bPublisher[50];
    int choice = 0;
    char confirmation;

    cout << endl;

    cout << setw(60) << "LET'S BUY A BOOK" << endl;
    cout << "\nLet's Search For The Book You Want To Buy\n";
    cout << setw(18) << "1. Book Title\n";
    cout << setw(18) << "2. Book Author\n";
    cout << setw(18) << "3. Book Publisher\n";
    cout << setw(18) << "4. Exit\n";

    cout << setw(39) << "Enter Your Choice: ";
    cin >> choice;

    cout << "\nYour choice is " << choice << endl;


    if(choice == 1)
    {
        cout << "\nEnter The Book Title You Want To Buy: ";
        cin >> bTitle;
        cout << endl;

        ifstream infile;
        infile.open("Bookstore.txt");
        while(!infile.eof())
        {
            infile.getline(bTitle, 50);
            infile.getline(bAuthor, 50);
            infile.getline(bPublisher, 50);
            infile >> inventory;
            infile >> sales;
            infile.ignore();
            if(strcmp(bTitle, bTitle) == 0)
            {
                cout << setw(60) << "BOOK FOUND" << endl;
                cout << setw(18) << "Book Title: " << bTitle << endl;
                cout << setw(19) << "Book Author: " << bAuthor << endl;
                cout << setw(22) << "Book Publisher: " << bPublisher << endl;
                cout << setw(21) << "Book In Stock: " << inventory << endl;
                cout << setw(21) << "Book Sales: " << sales << endl;
                cout << endl;
                cout << setw(39) << "ENTER (y) TO CONFIRM OR (n) TO EDIT: ";
                cin >> confirmation;
                cout << endl;
                if(confirmation == 'n')
                {
                    buy();
                }
                else
                {
                    system("cls");
                    cout << setw(62) << "CONFIRMED, BOOK WAS BOUGHT !!" << endl;
                    cout << endl;
                    title = bTitle;
                    author = bAuthor;
                    publisher = bPublisher;
                    inventory = inventory - 1;
                    sales = sales + 1;
                    ofstream outfile;
                    outfile.open("Sales.txt", ios::app);
                    outfile << "\nBook Title : " << title << endl;
                    outfile << "Book Author : " << author << endl;
                    outfile << "Book Publisher : " << publisher << endl;
                    outfile << "Book In Stock : " << inventory << endl;
                    outfile << "Book Sales : " << sales << endl;
                    outfile.close();
                }
            }
            infile.close();
        }
        
    }
    else if(choice == 2)
    {
        cout << "\nEnter The Book Author You Want To Buy: ";
        cin >> bAuthor;
        cout << endl;
    }
    else if(choice == 3)
    {
        cout << "\nEnter The Book Publisher You Want To Buy: ";
        cin >> bPublisher;
        cout << endl;
    }
    else if(choice == 4)
    {
        cout << setw(62) << "EXITING, INVENTORY NOT SAVED !!" << endl;
        cout << endl;
    }
    else
    {
        cout << setw(62) << "INVALID INPUT, INVENTORY NOT SAVED !!" << endl;
        cout << endl;
    }
    

    cout << endl;

    cout << "\nYou Want To Buy The Book With The Following Details\n";
    cout << setw(18) << "Book Title: " << bTitle << endl;
    cout << setw(19) << "Book Author: " << bAuthor << endl;
    cout << setw(22) << "Book Publisher: " << bPublisher << endl;

    cout << endl;

    cout << setw(39) << "ENTER (y) TO BUY OR (n) TO EXIT: ";
    cin >> confirmation;
    cout << endl;


    if(confirmation == 'n')
    {
        cout << setw(62) << "EXITING, NO BOOK WERE BOUGHT !!" << endl;
    }
    else
    {
        system("cls");
        cout << setw(62) << "CONFIRMED, BOOK WAS BOUGHT !!" << endl;
        cout << endl;
        title = bTitle;
        author = bAuthor;
        publisher = bPublisher;
        inventory = inventory - 1;
        sales = sales + 1;
        ofstream outfile;
        outfile.open("Bookstore.txt", ios::app);
        outfile << "\nBook Title : " << title << endl;
        outfile << "Book Author : " << author << endl;
        outfile << "Book Publisher : " << publisher << endl;
        outfile << "Book In Stock : " << inventory << endl;
        outfile << "Book Sales : " << sales << endl;
        outfile.close();
    }


}

void sell()
{

}

void display()
{

}


int main()
{
    
    int choice;

    system("cls");
    
    //display time and date changes every second
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "Current Date and Time: " << asctime(ltm);

    cout << endl;

    cout << setw(60) << "WELCOME TO THE BOOKSTORE" << endl;
    cout << endl;

    cout << setw(39) << "1. Add New Book\n";
    cout << setw(39) << "2. Buy Book\n";
    cout << setw(39) << "3. Sell Book\n";
    cout << setw(39) << "4. Display Inventory\n";
    cout << setw(39) << "5. Exit\n";

    cout << setw(39) << "Enter Your Choice: ";
    cin >> choice;

    cout << endl;

    if(choice == 1)
    {
        stocking();
    }
    else if(choice == 2)
    {
        buy();
    }
    else if(choice == 3)
    {
        sell();
    }
    else if(choice == 4)
    {
        display();
    }
    else if(choice == 5)
    {
        cout << setw(62) << "EXITING, GOODBYE !!" << endl;
    }
    else
    {
        cout << setw(62) << "INVALID INPUT, GOODBYE !!" << endl;
    }



    return 0;
}