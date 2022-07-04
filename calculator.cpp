#include <iostream>
#include <cmath>

using namespace std;

class calculator
{
    public :
     int num1;
     int num2;
     double ans;
     char op; 
};

    int main()
    {
        calculator myObj;
        myObj.num1;
        myObj.num2;
        myObj.op;
        myObj.ans;

        cout <<"Enter number 1" << endl;
        cin >> myObj.num1;
        cout <<"Enter number 2" << endl;
        cin >> myObj.num2;
        cout <<"Enter an operator (+, -, *, /, %):" << endl;
        cin >> myObj.op;

        switch(myObj.op) {
         case '+': myObj.ans = myObj.num1 + myObj.num2;
            break;
         case '-':
         if(myObj.num1>myObj.num2)
         {
            myObj.ans = myObj.num1 - myObj.num2;
         } 
         else{
            myObj.ans = myObj.num2 - myObj.num1;
         }
            break;
         case '*': myObj.ans = myObj.num1 * myObj.num2;
            break;
         case '/':
         if(myObj.num1>myObj.num2)
         {
            myObj.ans = myObj.num1 / myObj.num2;
         } 
         else{
            myObj.ans =myObj.num2 / myObj.num1;
         }
            break;
         case '%':
          if(myObj.num1>myObj.num2)
         {
            myObj.ans = myObj.num1 % myObj.num2;
         } 
         else {
            myObj.ans =myObj.num2 % myObj.num1;
         }
         break;

      default:  cout <<"Error! Enter correct operator";

   }
        cout <<"The result of the input is as given below :" <<endl;
        if(myObj.num1>myObj.num2){
         cout << myObj.ans;
        }
         else{
            cout << myObj.ans;
        }

    return 0;
}
