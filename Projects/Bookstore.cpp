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

    cout << setw(15) << "Enter Your Choice: ";
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
    string title;
    string author;
    string publisher;
    int choice = 0;
    char confirmation;

    cout << endl;

    cout << setw(60) << "LET'S BUY A BOOK" << endl;
    cout << "\nLet's Search For The Book You Want To Buy\n";
    cout << setw(18) << "1. Book Title\n";
    cout << setw(18) << "2. Book Author\n";
    cout << setw(18) << "3. Book Publisher\n";
    cout << setw(18) << "4. Exit\n";

    cout << setw(15) << "Enter Your Choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "\nEnter The Title Of The Book You Want To Buy: ";
        cin >> title;
        cout << endl;

        ifstream infile;
        infile.open("Bookstore.txt");
        while(infile.eof())
        {
            infile >> title;
            infile >> author;
            infile >> publisher;
            infile >> inventory;
            infile >> sales;
            if(title == title)
            {
                cout << setw(18) << "Book Title: " << title << endl;
                cout << setw(18) << "Book Author: " << author << endl;
                cout << setw(18) << "Book Publisher: " << publisher << endl;
                cout << setw(18) << "Book In Stock: " << inventory << endl;
                cout << setw(18) << "Book Sales: " << sales << endl;
                cout << endl;
            }
        }
        infile.close();

    }
    else if(choice == 2)
    {
        cout << "\nEnter The Book Author You Want To Buy: ";
        cin >> author;
        cout << endl;

        ifstream infile;
        infile.open("Bookstore.txt");
        while(infile.eof())
        {
            infile >> title;
            infile >> author;
            infile >> publisher;
            infile >> inventory;
            infile >> sales;
            if(author == author)
            {
                cout << setw(18) << "Book Title: " << title << endl;
                cout << setw(18) << "Book Author: " << author << endl;
                cout << setw(18) << "Book Publisher: " << publisher << endl;
                cout << setw(18) << "Book In Stock: " << inventory << endl;
                cout << setw(18) << "Book Sales: " << sales << endl;
                cout << endl;
            }
        }
        infile.close();
  
    }
    else if(choice == 3)
    {
        cout << "\nEnter The Book Publisher You Want To Buy: ";
        cin >> publisher;
        cout << endl;

        // ifstream infile;
        // infile.open("Bookstore.txt");
        // while(infile.eof())
        // {
        //     infile >> title;
        //     infile >> author;
        //     infile >> publisher;
        //     infile >> inventory;
        //     infile >> sales;
        //     if(publisher == publisher)
        //     {
        //         cout << setw(18) << "Book Title: " << title << endl;
        //         cout << setw(18) << "Book Author: " << author << endl;
        //         cout << setw(18) << "Book Publisher: " << publisher << endl;
        //         cout << setw(18) << "Book In Stock: " << inventory << endl;
        //         cout << setw(18) << "Book Sales: " << sales << endl;
        //         cout << endl;
        //     }
        // }
        // infile.close();

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

    cout << "\nYou Want To Buy The Book With The Following Details\n";
    cout << setw(18) << "Book Title: " << title << endl;
    cout << setw(18) << "Book Author: " << author << endl;
    cout << setw(18) << "Book Publisher: " << publisher << endl;    

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
        inventory = inventory - 1;
        sales = sales + 1;
        ifstream infile;
        infile.open("Bookstore.txt");
        ofstream outfile;
        outfile.open("Bookstore.txt", ios::app);
        while(infile.eof())
        {
            infile >> title;
            infile >> author;
            infile >> publisher;
            infile >> inventory;
            infile >> sales;
            if(title == title)
            {
                outfile << "\nBook Title : " << title << endl;
                outfile << "Book Author : " << author << endl;
                outfile << "Book Publisher : " << publisher << endl;
                outfile << "Book In Stock : " << inventory << endl;
                outfile << "Book Sales : " << sales << endl;
            }
        }
        infile.close();
        outfile.close();

    }


}

void sell()
{
    
    int temp = 0;
    
    ifstream infile;
    infile.open("Bookstore.txt");
    

    cout << "\nTotal Books In Stock: " << inventory << endl;
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
    cout << setw(35) << "2. Buy Book\n";
    cout << setw(36) << "3. Sell Book\n";
    cout << setw(44) << "4. Display Inventory\n";
    cout << setw(31) << "5. Exit\n";
    cout << endl;
    cout << setw(33) << "Enter Your Choice: ";
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
        exit(0);
    }
    else
    {
        cout << setw(62) << "INVALID INPUT, GOODBYE !!" << endl;
    }



    return 0;
}