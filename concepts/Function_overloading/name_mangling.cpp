/*
Encoding of function and variable names into unique names so that linkers can separate common names in the language.
Commonly used to facilitate overloading feature and visibility within different scopes.
How compiler is correctly identifying whenever a function call happens?
Internally for every function, compiler will maintain a unique name.
*/

#include<iostream>
using namespace std;

void display()                   //disp@@@
{
    for(int i=1;i<=30;i=i+1)
    {
        cout<<'*'<<" ";
    }
    cout<<"\n";
}

void display(int n)             //disp@@@I
{
    for(int i=1;i<=n;i=i+1)
    {
        cout<<'*'<<" ";
    }
    cout<<"\n";
}

void display(int n, char ch)    //disp@@@I@@@CH
{
    for(int i=1;i<=n;i=i+1)
    {
        cout<<ch<<" ";
    }
    cout<<"\n";
}

int main()
{
    display();
    display(30);
    display(30,'*');
    return 1;
}