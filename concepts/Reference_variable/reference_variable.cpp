/* 
1.Reference variable will act as alias to another variable.
2.Reference variable must be initialized.
3.Memory is not allocated for reference variable.
This concept is only available in C++
*/

#include<iostream>
using namespace std;

void swap(int &r1, int &r2)    // we are not storing the values. just refering to original data
{
    int t;
    t=r1;
    r1=r2;
    r2=t;
}

int main()
{
    int a=10,b=20;
    int &r1=a,&r2=b;           // r1 and r2 are alias to a and b whereever r1 and r2 is there, blindly replace with a and b
    ++a;
    --b;
    ++r1;
    --r2;
    cout<<a<<" "<<b<<endl;
    cout<<r1<<" "<<r2<<endl;
    swap(a,b);                 //Syntax is same as call by value behavior is same as pointer (call by address)
     cout<<a<<" "<<b<<endl;
    return 1;

}