//by Sushant Gaurav

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class student
{
    char name[20],course[20];
public:
    /*
    student()                                             //Parametrized constructor --> can be avoided in this case
    {
        cout<<"Parametrized constructor"<<endl;
    }
    */

    student(char name[20] , char course[20])
    {
        strcpy(this->name , name);
        strcpy(this->course , course);
    }

    void showstudent()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Course is "<<course<<endl;
    }
};

class marks : public student
{
private:
    int m,p,c;
public:
    marks(char name[20] , char course[20] , int m ,int p , int c) : student(name , course)
    {
        //student();                        --> Default constructor calling
        this->m = m;
        this->p = p;
        this->c = c;
    }

    void showmarks()
    {
        cout<<"\nPhysics = "<<p<<" , Chemistry = "<<c<<" , Mathematics = "<<m<<endl;
    }
};


int main()
{
    marks m("Sushant","Btech",95,95,95);
    m.showstudent();
    m.showmarks();
    return 0;
}

/*

Calling on constructor can also be done as:
    marks ( char name[20] , char course[20] , int m ,int p , int c ) : student :: student( name , course )

*/
