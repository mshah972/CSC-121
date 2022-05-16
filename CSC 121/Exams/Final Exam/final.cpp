#include <iostream>
#include "Student.h"
using namespace std;


int main()
{

    Student s1;
    Student s2("Moksh Shah", 100.0, 1234);


    cout << "\n\nBefore any changes: " << endl;

    s1.display();
    s2.display();

    s2.setName("John Smith");
    s2.setBalance(200.0);
    s2.setId(5678);

    cout << "\n*************************\n";

    cout << "\n\nAfter changing student 2: " << endl;

    s2.display();

    cout << endl;

    return 0;
}
