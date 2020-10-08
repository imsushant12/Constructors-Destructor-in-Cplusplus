//by Sushant Gaurav

// Parametrized Constructor //

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Constructor
{
    int a,b;

public:
    Constructor()
    {
        a=0;
        b=0;
    }

    Constructor(int x , int y)
    {
        a = x;
        b = y;
    }

    void printdata()
    {
        cout<<a<<endl;
        cout<<b<<endl<<endl;
    }
};

int main()
{
    Constructor c;          //default constructor will be called
    c.printdata();




    Constructor c1(10,20);     //parametrized constructor will be called
    c1.printdata();

    // Other way to call and initialize the Parametrized Constructor

    Constructor c2 = Constructor(300,400);
    c2.printdata();


}
