

#include <iostream>
using namespace std;

int ax(std::string);

std::string by(int);

int x{4};

int main()
{
    int x = 1;

    cout << "x = " << ::x;

    x = ax("\n\tthe x vaule ");
    cout << "\n\treturn x = " << x;

    cout << by(x) << ::x;

    return 0;
}

int ax(std::string p)
{
    x *= 3;
    cout << p;
    return x;
}

std::string by(int a)
{
    x *= 5;

    if(a < 5)
    {
        return "\n\t\tLx = ";
    }
    else 
    {
        return "\n\t\tGy = ";
    }
}