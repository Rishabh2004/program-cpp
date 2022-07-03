#include <iostream>

using namespace std;

class calculator
{
    public :
     double num1;
     double num2;
     double ans;
     char op; 
};

    int main()
    {
        calculator myObj;
        myObj.num1;
        myObj.num2;
        myObj.op;
        cout <<"Enter number 1" << endl;
        cin >> myObj.num1;
        cout <<"Enter number 2" << endl;
        cin >> myObj.num2;
        cout <<"Enter an operator (+, -, *, /, %):" << endl;
        cin >> myObj.op;


        return 0;
    }