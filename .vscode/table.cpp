#include <iostream>
#include <cmath>

using namespace std;

class table
{
    public :
     int num;
};

void table1()
{
    cout <<"Enter a number "<< endl;
    cin >> num;

}

void table2()
{
     if(num<=0)
        {
            cout << "Error! Please Enter Correct number";
        }
        else {
        for(int i=1; i<=10; i++)
        {
            int tab = num*i;
            cout << num <<" * " << i << " = " << tab;
        }
    }
}

int main()
{
    table table1;
    table1();
    table2();
    return 0;
}
