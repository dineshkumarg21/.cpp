/*
Default arguments should be at trailing end.
i.e. non default arguments follows default arguments.
*/

#include<iostream>
using namespace std;

void display(int n=30, char ch='*')
{
   for(int i=1;i<=n;i=i+1)
   {
      cout<<ch;
   }
   cout<<'\n';
}

int main()
{
    display();
    display(15);
    display(20,'a');
    //display( , 'x');      C.E ( comma , should have left & right value)
    //display(10,'x',5);    C.E too many arguments 
}