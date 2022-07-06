#include <iostream>
#include <cmath>

using namespace std;

int fac=1,num1;

void fact()
{
    cout <<"Enter a number" << endl;
    cin >> num1;
     if((num1==0)||(num1<0))
     {
        cout << "Factorial is 1";    
     }
     else{
     for(int i=1;i<=num1;i++)
     {    
         fac=fac*i;         
     }
     cout << "Factorial of " << num1 <<" is: " << fac << endl;
    }
}

int main()
{
    fact();
    return 0;
}
