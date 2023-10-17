#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a,b,temp;
    a=10;
    b=20;

    cout<<"a:"<<a<<" and b:"<<b<<""<<endl;
