#include<iostream>
using namespace std;

void swap(int &a, int &b);

int main()
{
    int num1 = 10;
    int num2 = 20;
    cout<<num1<<" "<<num2<<endl;
    swap(num1, num2);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}