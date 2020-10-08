/*by Sushant Gaurav
--------------------

// Default Constructor in Private //

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Constructor
{
    int x;
    int y;
    
public:
    
    Constructor()		//1.
    {}

    Constructor()		//2.-->Both are called default constructor, can use any one.
    {
        x=10;
        y=20;
    }
	
    void printdata()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};

int main()
{
    Constructor c;
    c.printdata();
}

===========================================================================================

*/



// Default Constructor in Public//

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Constructor
{

public:

    int x;
    int y;
    
    Constructor()		//1.
    {}

    Constructor()		//2.-->Both are called default constructor, can use any one. But cannot use both.
    {
        x=10;
        y=20;
    }
	
};

int main()
{
    Constructor c;
    cout<<c.x<<endl;
    cout<<c.y<<endl;
}

