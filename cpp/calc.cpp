#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;
    cout<<"Enter operators op :";
    cin>>op;
    switch(op)
    {
        case'+':
        cout<< "Sum of num1 and num2 : "<<num1<<" + "<<num2<<" = "<<num1 + num2;
        break;

        case'-':
        cout<< "Substraction of num1 and num2 : "<<num1<<" - "<<num2<<" = "<<num1 - num2;
        break;

        case'*':
        cout<< "Multiplication of num1 and num2 : "<<num1<<" * "<<num2<<" = "<<num1 * num2;
        break;

        case'/':
        cout<< "Division of num1 and num2 : "<<num1<<" / "<<num2<<" = "<<num1 / num2;
        break;

    }
g
}