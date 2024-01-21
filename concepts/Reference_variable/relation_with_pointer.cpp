/*
Internally reference variable converted as Constant pointer.
Indirection operator is implicitly by default applied on reference variable.
Programmer is not required to apply indirection operator.
int &r=a; ------> int * const r = &a;
*/

#include<iostream>
using namespace std;

int test (int a, int *p,int &r)
{
    cout<<a<<" "<<*p<<" "<<r<<endl;
    ++a;
    ++*p;
    ++r;
    if(a<=2)
    { 
       test(a,p,r);
    }
    cout<<a<<" "<<*p<<" "<<r<<endl; 
}

int main()
{
    int x=1,y=1,z=1;
    test(x,&y,z);
    cout<<x<<" "<<y<<" "<<z<<endl;
}