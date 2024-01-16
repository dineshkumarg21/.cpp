/*
1.In C programming, it is not possible to have same name for different functions. To overcome this, C++ has concpet called Function Overloading.
2.We can write 'n' functions with the same name. But they should differ in any of the following,
   i. Order of arguments
   ii. Type of arguments
   iii. Number of arguments
   These three are called function signature / function prototype
3.Function overloading does not depend on return type.
*/

#include<iostream>
using namespace std;

void display()
{
    for(int i=1;i<=30;i=i+1)
    {
        cout<<'*'<<" ";
    }
    cout<<"\n";
}

void display(int n)
{
    for(int i=1;i<=n;i=i+1)
    {
        cout<<'*'<<" ";
    }
    cout<<"\n";
}

void display(int n, char ch)
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