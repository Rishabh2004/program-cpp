#include <iostream>
#include <cmath>

using namespace std;

int fac=1,num;

void fact()
{
    cout <<"Enter a number" << endl;
    cin >> num;
     if((num==0)||(num<0))
     {
        cout << "Factorial is 1";    
     }
     else{
     for(int i=1;i<=num;i++)
     {    
         fac=fac*i;         
     }
     cout << "Factorial of " << num <<" is: " << fac << endl;
    }
}

int main()
{
    fact();
    return 0;
}