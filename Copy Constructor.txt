//by Sushant Gaurav

// Copy Constructor //

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Constructor
{
    int a,b;

public:

    Constructor()                               //default constructor
    {
        a=0;
        b=0;
    }

    Constructor(int x , int y)                  //parametrized constructor
    {
        a = x;
        b = y;
    }

    Constructor( Constructor &old_c1)           //Copy constructor
    {
        a = old_c1.a;                           //a of c1 is copied to new object's a
        b = old_c1.b;                           //b of c1 is copied to new object's b
    }

    void printdata()
    {
        cout<<a<<endl;
        cout<<b<<endl<<endl;
    }

};

int main()
{
    Constructor c;
    c.printdata();

    Constructor c1(10,20);
    c1.printdata();


    Constructor c3 = c1;                  //Copy Constructor calling
    c3.printdata();
    Constructor c4 (c1);                  //other way to use copy constructor
    c4.printdata();

    Constructor c5;
    c5 = c;
    c5.printdata();                       //this is assignment not copy constructor calling
}

/*
Output:
0
0

10
20

10
20

10
20

0
0
*/
